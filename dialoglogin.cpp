#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include "ctlcan.h"
#include <QDesktopWidget>
#include <QComboBox>

DialogLogin::DialogLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogin)
{
    ui->setupUi(this);
    this->setWindowTitle("CAN login");
    QDesktopWidget *desk_top = QApplication::desktop();
    QRect rect= desk_top->availableGeometry();
    this->move((rect.width()-this->width())/2,(rect.height()-this->height())/2);

    setWhatsThis("Hello world");
}

DialogLogin::~DialogLogin()
{
    delete ui;
}

void DialogLogin::closeEvent(QCloseEvent *e)
{
    emit window_close();
    QDialog::closeEvent(e);
}

void DialogLogin::on_pushButton_clicked()
{
    this->hide();
    int dev_type = ui->DevType->currentIndex();
    int board_index = ui->BoardRate->currentIndex();
    int dev_index = ui->CanIndex->currentIndex();
    int port_index = ui->PortIndex->currentIndex();

    switch(dev_type){
    case 0: dev_type = 21;break;
    case 1: dev_type = 20;break;
    default:    dev_type = 21;break;
    }

    switch(board_index){
    case 0: board_index = CtlCan::Kbps250;break;
    case 1: board_index = CtlCan::Kbps125;break;
    case 2: board_index = CtlCan::Kbps500;break;
    default:    board_index = CtlCan::Kbps250;break;
    }

    emit can_start(dev_type,dev_index,board_index,port_index);
}
