#include "widget.h"
#include "ui_widget.h"
#include "QString"
#include <string.h>
#include <iostream>
#include <QMessageBox>
#include <QEventLoop>
#include <QLabel>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QFile>
#include <QDir>

struct can_msg_struct{
    int msg_length;
    VCI_CAN_OBJ msg_buff[REC_ARRY_LEN];
}can_msg;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tb_down_data->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tb_down_data->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tb_ac_data->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tb_ac_data->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tb_Vo->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tb_Vo->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    can_bps = NULL;
    can_msg .msg_length = 0;
    comm_err_cnt = 0;
    connect_cnt = CAN_CONNECT_CNT;
    memset(&buff_acc,0,sizeof(struct data_acc));

    Login = new DialogLogin(this);
    Login->show();
    connect(Login,&DialogLogin::can_start,this,&Widget::canlogs_slot);

    this->read_acc_val_when_open();

    connect(Login,&DialogLogin::window_close,this,&Widget::close);      //子窗口关闭,触发主窗口关闭
    timer_100ms = new QTimer(this);
    connect(timer_100ms,&QTimer::timeout,this,&Widget::timer100ms_touch);
    ChildThread *rec_thread = new ChildThread(this);
    connect(this,&Widget::send_rec_start,rec_thread,&ChildThread::rec_slot);
    connect(this,&Widget::close,rec_thread,&ChildThread::rec_exit);
    rec_thread->start();
}

void Widget::read_acc_val_when_open()
{
    QFile file(QDir::toNativeSeparators("acc_val.xml"));
    QString temp_str;
    file.open(QIODevice::ReadWrite);
    qint64 length = file.size();
    if(length == 0){
        memset(&acc_voltag,0,sizeof(struct acc_val_st));
        for(int i=0;i<VOLTAG_LEN;i++)
            temp_str += QString("<A%1>0</A%1>\n").arg(i);
        for(int i=0;i<VOLTAG_LEN;i++)
            temp_str += QString("<B%1>0</B%1>\n").arg(i);
        file.write(QByteArray::fromStdString(temp_str.toStdString()));
        file.close();
    }
    file.open(QIODevice::ReadWrite);
    char *data = (char *)malloc(file.size()+1);

    QTableWidgetItem *item;
    file.read(data,length);
    file.close();
    data[length] = '\0';
    QString file_context(data);
    for(int i=0;i<VOLTAG_LEN;i++){
        length = file_context.indexOf(QString("</A%1>").arg(i)) - file_context.indexOf(QString("<A%1>").arg(i))-4;
        temp_str = file_context.mid(file_context.indexOf(QString("<A%1>").arg(i))+4,length);
        acc_voltag.acca[i] = temp_str;
        item = ui->tb_ac_data->item(i,0);
        item->setText(temp_str);
    }
    for(int i=0;i<VOLTAG_LEN;i++){
        length = file_context.indexOf(QString("</B%1>").arg(i)) - file_context.indexOf(QString("<B%1>").arg(i))-4;
        temp_str = file_context.mid(file_context.indexOf(QString("<B%1>").arg(i))+4,length);
        acc_voltag.accb[i] = temp_str;
        item = ui->tb_ac_data->item(i,1);
        item->setText(temp_str);
    }
}

Widget::~Widget()
{
    if(can_bps && can_bps->state == CtlCan::on){
        can_bps->state = CtlCan::off;
        can_bps->close();
        delete can_bps;
    }
    delete ui;
}

void Widget::timer100ms_touch()
{
    int ad_value,offset;
    int i,pos;
    int tmp;
    float rate;
    QString txt;

    float voltag_temp;
    connect_cnt--;
    if(can_msg.msg_length){
        connect_cnt = CAN_CONNECT_CNT;
        comm_err_cnt = 0;
        ui->lb_conn->setText("connect..");
        for(i=0;i<can_msg.msg_length;i++){
            if((can_msg.msg_buff[i].ID&0xfffffff0) == BOARD_ACC_ORGIN_MSG_ID){
                pos = can_msg.msg_buff[i].Data[0];
                txt = QString("ID: %1").arg(can_msg.msg_buff[i].ID & 0x0000000F);
                ui->lb_id->setText(txt);
                txt = QString("%1").arg(pos);
                ui->tb_down_data->setItem(pos,0,new QTableWidgetItem(txt));         //设置通道号
                ad_value = can_msg.msg_buff[i].Data[2] + can_msg.msg_buff[i].Data[3] *256;
                txt = QString("%1").arg(ad_value);
                ui->tb_down_data->setItem(pos,1,new QTableWidgetItem(txt));         //设置ADC值
                offset = can_msg.msg_buff[i].Data[1];
                txt = QString("%1").arg(offset);
                ui->tb_down_data->setItem(pos,2,new QTableWidgetItem(txt));         //设置偏移值
                tmp = can_msg.msg_buff[i].Data[5] + can_msg.msg_buff[i].Data[6] *256 + can_msg.msg_buff[i].Data[7] * 65536;
                rate_exp = pow(10,can_msg.msg_buff[i].Data[4]);
                rate = (tmp*1.0) / (rate_exp);
                txt = QString("%1").arg(rate);
                ui->tb_down_data->setItem(pos,3,new QTableWidgetItem(txt));         //设置系数值

                voltag_temp = (ad_value * ADC_REF_VOL) / 4096.0;
                vo_total[pos] = (int)voltag_temp;
                txt = QString("%1").arg(voltag_temp);
                ui->tb_down_data->setItem(pos,4,new QTableWidgetItem(txt));

                voltag_total[pos] = (int)((voltag_temp + offset) * rate);           //计算累计电压
                txt = QString("%1").arg(voltag_total[pos]);
                ui->tb_down_data->setItem(pos,5,new QTableWidgetItem(txt));

                if(pos == 0){
                    txt = QString("%1").arg(voltag_total[0]);
                    ui->tb_down_data->setItem(0,6,new QTableWidgetItem(txt));
                }else{
                    txt = QString("%1").arg(voltag_total[pos]-voltag_total[pos-1]);
                    ui->tb_down_data->setItem(pos,6,new QTableWidgetItem(txt));
                }

                if(rate == buff_acc.rate[pos]){
                    buff_acc.flag[pos] = 0;
                }
            }
        }
        ui->lb_fbnum->setText(QString("fb_num: %1").arg(can_msg.msg_length));
        can_msg.msg_length = 0;
    }

    send_acc_cnt = (send_acc_cnt >= VOLTAG_LEN-1)?(0):(++send_acc_cnt);
    if(buff_acc.flag[send_acc_cnt]){
        tmp = (int)(buff_acc.rate[send_acc_cnt] * rate_exp);
        if(tmp != 0){
            can_bps->send_data[0] = SEND_CMD_ACC;
            can_bps->send_data[1] = send_acc_cnt;
            can_bps->send_data[2] = (unsigned char)buff_acc.off[send_acc_cnt];
            can_bps->send_data[3] = 0xFF;
            can_bps->send_data[4] = 0xFF;
            can_bps->send_data[5] = tmp & 0xFF;
            can_bps->send_data[6] = (tmp >> 8) & 0xFF;
            can_bps->send_data[7] = (tmp >> 16) & 0xFF;
            can_bps->send_one_msg(SEND_BOARD_CONFIG,8,can_bps->send_data);
        }
    }
    ms100_timer++;
    if(comm_err_cnt < CAN_ERROR_CNT && (ms100_timer > 100)){
        ms100_timer = 0;
        can_bps->send_data[0] = SEND_CMD_TEST;
        can_bps->send_data[1] = 0x00;
        comm_err_cnt += can_bps->send_one_msg(SEND_BOARD_CONFIG,8,can_bps->send_data);
        if(comm_err_cnt > 0){
            ui->lb_conn->setText("disconnect");
            QMessageBox::information(this,"ERROR","Lost connect");
        }
    }

    if(connect_cnt < 0){
        ui->lb_conn->setText("disconnect");
        connect_cnt = CAN_CONNECT_CNT;
    }
}

void Widget::canlogs_slot(int dev_type, int dev_index, int board_rate, int port_num)
{
    int errInfo;
    can_bps = new CtlCan(dev_type,dev_index,port_num);
    errInfo = can_bps->open((CtlCan::baudRate)board_rate);
    if(errInfo){
        can_bps->state = CtlCan::off;
        QMessageBox::information(NULL,"ERROR","打开CAN设备失败",QMessageBox::Ok);
        this->close();
    }else{
        can_bps->state = CtlCan::on;
        timer_100ms->start(CRIRC_TIMER_MS);
        emit send_rec_start(can_bps);
    }
}

ChildThread::ChildThread(QObject *parent)// : ChildThread(parent)
{
    loopFlag = 1;
    can_dev = NULL;
}

ChildThread::~ChildThread()
{

}

void ChildThread::rec_slot(CtlCan *param)
{
    can_dev = param;
}

void ChildThread::rec_exit()
{
    loopFlag = 0;
}

void ChildThread::run()
{
    int msg_len = 0;
    while(loopFlag ){
        if(can_dev){
            msg_len = can_dev->get_recive_num();
            if(msg_len + can_msg.msg_length > REC_ARRY_LEN){
                can_msg.msg_length = 0;
            }
            msg_len = can_dev->can_rec_read(&can_msg.msg_buff[can_msg.msg_length],msg_len,-1);
            can_msg.msg_length += msg_len;
        }
        msleep(101);
    }
}

float Widget::acc_rate_once(QString val,QString off,int pos)    //通过一个指定一个固定偏移量，一次计算出比例系数
{
    float f_val;
    int i_off;
    if(val.isEmpty() || off.isEmpty()){
        return 0;
    }
    f_val = val.toFloat();
    i_off = off.toInt();

    return (f_val - i_off) / vo_total[pos];
}

void Widget::on_btn_choice_data_clicked()           //一次校准
{
    QTableWidgetItem *tb_item;
    QString txt_val,txt_off,txt_rate;
    QString txt;
    int tb_row = ui->tb_ac_data->rowCount();
    for(int i=0;i<tb_row;i++){
        tb_item = ui->tb_ac_data->item(i,0);                        //获取标准电压值
        txt_val = (tb_item)?(tb_item->text()):(QString("0"));
        tb_item = ui->tb_ac_data->item(i,2);                        //获取偏移值
        txt_off = (tb_item)?(tb_item->text()):(QString("0"));
        txt = QString("%1").arg(acc_rate_once(txt_val,txt_off,i));  //计算比例系数
        ui->tb_ac_data->setItem(i,3,new QTableWidgetItem(txt));
        txt = QString("%1").arg(vo_total[i]);                       //获取输出电压并保存
        ui->tb_Vo->setItem(i,0,new QTableWidgetItem(txt));
    }
    this->save_acc_val(0);
}

void Widget::save_acc_val(int col)
{
    QTableWidgetItem *Item;
    int i;
    QString temp_str="";
    for(i=0;i<VOLTAG_LEN;i++){
        Item = ui->tb_ac_data->item(i,col);
        if(col==0){
            acc_voltag.acca[i] = Item->text();
        }else
            acc_voltag.accb[i] = Item->text();
    }
    QFile file(QDir::toNativeSeparators("acc_val.xml"));
    for(i=0;i<VOLTAG_LEN;i++){
        temp_str += QString("<A%1>%2</A%1>\n").arg(i).arg(acc_voltag.acca[i]);
    }
    for(i=0;i<VOLTAG_LEN;i++){
        temp_str += QString("<B%1>%2</B%1>\n").arg(i).arg(acc_voltag.accb[i]);
    }
    file.open(QIODevice::ReadWrite);
    file.resize(0);
    file.write(QByteArray::fromStdString(temp_str.toStdString()));
    file.close();
}

float Widget::acc_rate_twece(QString vi_1,QString vi_2,QString vo_1,int pos)    //通过2次采样，计算出比例系数
{
    int ivi_1,ivi_2,ivo_1;

    if(vi_1.isEmpty() || vi_2.isEmpty() || vo_1.isEmpty())
    {
        return 0;
    }
    ivi_1 = vi_1.toInt();
    ivi_2 = vi_2.toInt();
    ivo_1 = vo_1.toInt();

    if(ivi_1 == 0 || ivi_2 == 0 || ivo_1 == 0 || vo_total[pos] ==0){
        return 0;
    }

    return (float)(ivi_1 - ivi_2)/(ivo_1 - vo_total[pos]);
}

int Widget::acc_offset_twece(QString vi_2,int vo_2,float rate)      //通过2次采样，计算偏移
{
    int ivi_2,ivo_2;
    ivi_2 = vi_2.toInt();
    if(ivi_2 == 0 || ivo_2 == 0)
        return 0;
    return (int)(ivi_2 - vo_2 * rate);
}

void Widget::on_btn_acc_clicked()                   //二次校准
{
    QTableWidgetItem *tb_item;
    QString txt_vi1,txt_vi2,txt_vo1,txt_rate;
    QString txt;
    float rate;
    int tb_col = ui->tb_ac_data->columnCount();
    int tb_row = ui->tb_ac_data->rowCount();
    for(int i=0;i<tb_row;i++){
        tb_item = ui->tb_ac_data->item(i,0);                        //获取A组标准电压
        txt_vi1 = (tb_item)?(tb_item->text()):(QString("0"));
        tb_item = ui->tb_ac_data->item(i,1);                        //获取B组标准电压
        txt_vi2 = (tb_item)?(tb_item->text()):(QString("0"));
        tb_item = ui->tb_Vo->item(i,0);                             //获取A组输出电压
        txt_vo1 = (tb_item)?(tb_item->text()):(QString("0"));
        rate = acc_rate_twece(txt_vi1,txt_vi2,txt_vo1,i);           //计算比例系数
        txt = QString("%1").arg(rate);
        ui->tb_ac_data->setItem(i,3,new QTableWidgetItem(txt));
        txt = QString("%1").arg(acc_offset_twece(txt_vi2,vo_total[i],rate));    //计算偏移
        ui->tb_ac_data->setItem(i,2,new QTableWidgetItem(txt));
        txt = QString("%1").arg(vo_total[i]);                       //设置B组输出电压
        ui->tb_Vo->setItem(i,1,new QTableWidgetItem(txt));
    }
    this->save_acc_val(1);
}

void Widget::on_btn_set_acc_clicked()
{
    int i;
    bool state;
    int row = ui->tb_ac_data->rowCount();
    QString s_off,s_rate;
    QTableWidgetItem *tb_item;
    for(i=0;i<row;i++){
        tb_item = ui->tb_ac_data->item(i,2);
        s_off = (tb_item)?(tb_item->text()):(QString("0"));
        tb_item = ui->tb_ac_data->item(i,3);
        s_rate = (tb_item)?(tb_item->text()):(QString("0"));
        buff_acc.rate[i] = s_rate.toFloat(&state);
        if(state == false){
            buff_acc.rate[i] = 0;
            buff_acc.flag[i] = false;
        }else{
            buff_acc.flag[i] = true;
        }
        buff_acc.off[i] = s_off.toInt();
    }
}
