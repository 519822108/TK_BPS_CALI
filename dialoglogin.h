#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>

namespace Ui {
class DialogLogin;
}

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = 0);
    ~DialogLogin();
    void closeEvent(QCloseEvent *e);

private slots:
    void on_pushButton_clicked();

signals:
    void can_start(int dev_type,int dev_index,int board_rate,int port_num);
    void window_close(void);
private:
    Ui::DialogLogin *ui;
};

#endif // DIALOGLOGIN_H
