#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QThread>
#include "ctlcan.h"
#include "QTimer"
#include "dialoglogin.h"
#include "config.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    int voltag_total[VOLTAG_LEN];
    int vo_total[VOLTAG_LEN];
    float acc_rate_once(QString val,QString off,int pos);
    float acc_rate_twece(QString vi_1,QString vi_2,QString vo_1,int pos);
    int acc_offset_twece(QString vi_2,int v0_2,float rate);
    void read_acc_val_when_open();
    void save_acc_val(int col);

    struct data_acc{
        float rate[VOLTAG_LEN];
        int off[VOLTAG_LEN];
        int flag[VOLTAG_LEN];
    }buff_acc;

    struct acc_val_st{
        QString acca[VOLTAG_LEN];
        QString accb[VOLTAG_LEN];
    }acc_voltag;

signals:
    void send_rec_start(CtlCan *param);

private slots:
    void canlogs_slot(int dev_type,int dev_index,int board_rate,int port_num);
    void timer100ms_touch(void);

    void on_btn_choice_data_clicked();

    void on_btn_acc_clicked();

    void on_btn_set_acc_clicked();

private:
    unsigned char send_acc_cnt;
    int rate_exp;                                   //标定系数放大比例
    int comm_err_cnt;                               //发送失败错误计数
    int connect_cnt;                                //接受报文计时器
    int ms100_timer;                                //100ms时间抵达
    Ui::Widget *ui;
    QTimer *timer_100ms;
    CtlCan *can_bps;
    DialogLogin *Login;
};

class ChildThread : public QThread
{
    Q_OBJECT
public:
    explicit ChildThread(QObject *parent = 0);
    ~ChildThread(void);

public slots:
    void rec_slot(CtlCan *param);
    void rec_exit();

protected:
    void run();

private:
    CtlCan *can_dev;
    int loopFlag;
};

#endif // WIDGET_H
