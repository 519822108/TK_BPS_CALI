/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tb_down_data;
    QTableWidget *tb_ac_data;
    QPushButton *btn_choice_data;
    QPushButton *btn_acc;
    QTableWidget *tb_Vo;
    QPushButton *btn_set_acc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lb_id;
    QLabel *lb_fbnum;
    QLabel *lb_conn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(621, 481);
        tb_down_data = new QTableWidget(Widget);
        if (tb_down_data->columnCount() < 7)
            tb_down_data->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tb_down_data->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tb_down_data->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tb_down_data->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tb_down_data->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tb_down_data->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tb_down_data->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tb_down_data->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tb_down_data->rowCount() < 8)
            tb_down_data->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tb_down_data->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tb_down_data->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tb_down_data->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tb_down_data->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tb_down_data->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tb_down_data->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tb_down_data->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tb_down_data->setVerticalHeaderItem(7, __qtablewidgetitem14);
        tb_down_data->setObjectName(QStringLiteral("tb_down_data"));
        tb_down_data->setGeometry(QRect(0, 0, 621, 231));
        tb_down_data->setAutoScroll(true);
        tb_down_data->setRowCount(8);
        tb_down_data->verticalHeader()->setVisible(false);
        tb_ac_data = new QTableWidget(Widget);
        if (tb_ac_data->columnCount() < 4)
            tb_ac_data->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tb_ac_data->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tb_ac_data->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tb_ac_data->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tb_ac_data->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        if (tb_ac_data->rowCount() < 8)
            tb_ac_data->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tb_ac_data->setVerticalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tb_ac_data->setVerticalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tb_ac_data->setVerticalHeaderItem(2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tb_ac_data->setVerticalHeaderItem(3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tb_ac_data->setVerticalHeaderItem(4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tb_ac_data->setVerticalHeaderItem(5, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tb_ac_data->setVerticalHeaderItem(6, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tb_ac_data->setVerticalHeaderItem(7, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tb_ac_data->setItem(0, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tb_ac_data->setItem(0, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tb_ac_data->setItem(0, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tb_ac_data->setItem(1, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tb_ac_data->setItem(1, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tb_ac_data->setItem(1, 2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tb_ac_data->setItem(2, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tb_ac_data->setItem(2, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tb_ac_data->setItem(2, 2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tb_ac_data->setItem(3, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tb_ac_data->setItem(3, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tb_ac_data->setItem(3, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tb_ac_data->setItem(4, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tb_ac_data->setItem(4, 1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tb_ac_data->setItem(4, 2, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tb_ac_data->setItem(5, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tb_ac_data->setItem(5, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tb_ac_data->setItem(5, 2, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tb_ac_data->setItem(6, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tb_ac_data->setItem(6, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tb_ac_data->setItem(6, 2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tb_ac_data->setItem(7, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tb_ac_data->setItem(7, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tb_ac_data->setItem(7, 2, __qtablewidgetitem50);
        tb_ac_data->setObjectName(QStringLiteral("tb_ac_data"));
        tb_ac_data->setGeometry(QRect(210, 250, 321, 231));
        tb_ac_data->verticalHeader()->setVisible(false);
        btn_choice_data = new QPushButton(Widget);
        btn_choice_data->setObjectName(QStringLiteral("btn_choice_data"));
        btn_choice_data->setGeometry(QRect(541, 251, 75, 23));
        btn_acc = new QPushButton(Widget);
        btn_acc->setObjectName(QStringLiteral("btn_acc"));
        btn_acc->setGeometry(QRect(541, 280, 75, 23));
        tb_Vo = new QTableWidget(Widget);
        if (tb_Vo->columnCount() < 2)
            tb_Vo->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tb_Vo->setHorizontalHeaderItem(0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tb_Vo->setHorizontalHeaderItem(1, __qtablewidgetitem52);
        if (tb_Vo->rowCount() < 8)
            tb_Vo->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tb_Vo->setVerticalHeaderItem(0, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tb_Vo->setVerticalHeaderItem(1, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tb_Vo->setVerticalHeaderItem(2, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tb_Vo->setVerticalHeaderItem(3, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tb_Vo->setVerticalHeaderItem(4, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tb_Vo->setVerticalHeaderItem(5, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tb_Vo->setVerticalHeaderItem(6, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tb_Vo->setVerticalHeaderItem(7, __qtablewidgetitem60);
        tb_Vo->setObjectName(QStringLiteral("tb_Vo"));
        tb_Vo->setGeometry(QRect(0, 250, 191, 231));
        tb_Vo->verticalHeader()->setVisible(false);
        btn_set_acc = new QPushButton(Widget);
        btn_set_acc->setObjectName(QStringLiteral("btn_set_acc"));
        btn_set_acc->setGeometry(QRect(541, 309, 75, 51));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(540, 430, 62, 50));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lb_id = new QLabel(layoutWidget);
        lb_id->setObjectName(QStringLiteral("lb_id"));

        verticalLayout->addWidget(lb_id);

        lb_fbnum = new QLabel(layoutWidget);
        lb_fbnum->setObjectName(QStringLiteral("lb_fbnum"));

        verticalLayout->addWidget(lb_fbnum);

        lb_conn = new QLabel(layoutWidget);
        lb_conn->setObjectName(QStringLiteral("lb_conn"));

        verticalLayout->addWidget(lb_conn);

        QWidget::setTabOrder(btn_choice_data, btn_acc);
        QWidget::setTabOrder(btn_acc, btn_set_acc);
        QWidget::setTabOrder(btn_set_acc, tb_ac_data);
        QWidget::setTabOrder(tb_ac_data, tb_Vo);
        QWidget::setTabOrder(tb_Vo, tb_down_data);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "TK_BPS_ACC", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tb_down_data->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\351\200\232\351\201\223", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tb_down_data->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "ADC\345\200\274", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tb_down_data->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\345\201\217\347\247\273\345\200\274", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tb_down_data->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "\346\257\224\344\276\213\347\263\273\346\225\260\345\200\274", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tb_down_data->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "ADC\347\253\257\345\217\243\347\224\265\345\216\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tb_down_data->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\346\200\273\345\216\213(mV)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tb_down_data->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\345\215\225\344\275\223(mV)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tb_down_data->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("Widget", "c0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tb_down_data->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("Widget", "c1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tb_down_data->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("Widget", "c2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tb_down_data->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("Widget", "c3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tb_down_data->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("Widget", "c4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tb_down_data->verticalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("Widget", "c5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tb_down_data->verticalHeaderItem(6);
        ___qtablewidgetitem13->setText(QApplication::translate("Widget", "c6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tb_down_data->verticalHeaderItem(7);
        ___qtablewidgetitem14->setText(QApplication::translate("Widget", "c7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tb_ac_data->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\347\224\265\345\216\213A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tb_ac_data->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("Widget", "\350\276\223\345\205\245\347\224\265\345\216\213B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tb_ac_data->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("Widget", "AC_offset", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tb_ac_data->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QApplication::translate("Widget", "AC_rate", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tb_ac_data->verticalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("Widget", "c0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tb_ac_data->verticalHeaderItem(1);
        ___qtablewidgetitem20->setText(QApplication::translate("Widget", "c1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tb_ac_data->verticalHeaderItem(2);
        ___qtablewidgetitem21->setText(QApplication::translate("Widget", "c2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tb_ac_data->verticalHeaderItem(3);
        ___qtablewidgetitem22->setText(QApplication::translate("Widget", "c3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tb_ac_data->verticalHeaderItem(4);
        ___qtablewidgetitem23->setText(QApplication::translate("Widget", "c4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tb_ac_data->verticalHeaderItem(5);
        ___qtablewidgetitem24->setText(QApplication::translate("Widget", "c5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tb_ac_data->verticalHeaderItem(6);
        ___qtablewidgetitem25->setText(QApplication::translate("Widget", "c6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tb_ac_data->verticalHeaderItem(7);
        ___qtablewidgetitem26->setText(QApplication::translate("Widget", "c7", Q_NULLPTR));

        const bool __sortingEnabled = tb_ac_data->isSortingEnabled();
        tb_ac_data->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem27 = tb_ac_data->item(0, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("Widget", "3288", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tb_ac_data->item(0, 2);
        ___qtablewidgetitem28->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tb_ac_data->item(1, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("Widget", "6580", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tb_ac_data->item(1, 2);
        ___qtablewidgetitem30->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tb_ac_data->item(2, 0);
        ___qtablewidgetitem31->setText(QApplication::translate("Widget", "9850", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tb_ac_data->item(2, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tb_ac_data->item(3, 0);
        ___qtablewidgetitem33->setText(QApplication::translate("Widget", "13160", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tb_ac_data->item(3, 2);
        ___qtablewidgetitem34->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tb_ac_data->item(4, 0);
        ___qtablewidgetitem35->setText(QApplication::translate("Widget", "16460", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tb_ac_data->item(4, 2);
        ___qtablewidgetitem36->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tb_ac_data->item(5, 0);
        ___qtablewidgetitem37->setText(QApplication::translate("Widget", "19660", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tb_ac_data->item(5, 2);
        ___qtablewidgetitem38->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tb_ac_data->item(6, 0);
        ___qtablewidgetitem39->setText(QApplication::translate("Widget", "22960", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tb_ac_data->item(6, 2);
        ___qtablewidgetitem40->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tb_ac_data->item(7, 0);
        ___qtablewidgetitem41->setText(QApplication::translate("Widget", "22840", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tb_ac_data->item(7, 2);
        ___qtablewidgetitem42->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        tb_ac_data->setSortingEnabled(__sortingEnabled);

        btn_choice_data->setText(QApplication::translate("Widget", "\344\270\200\346\254\241\346\240\241\345\207\206", Q_NULLPTR));
        btn_acc->setText(QApplication::translate("Widget", "\344\272\214\346\254\241\346\240\241\345\207\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tb_Vo->horizontalHeaderItem(0);
        ___qtablewidgetitem43->setText(QApplication::translate("Widget", "\350\276\223\345\207\272\347\224\265\345\216\213A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tb_Vo->horizontalHeaderItem(1);
        ___qtablewidgetitem44->setText(QApplication::translate("Widget", "\350\276\223\345\207\272\347\224\265\345\216\213B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tb_Vo->verticalHeaderItem(0);
        ___qtablewidgetitem45->setText(QApplication::translate("Widget", "c0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tb_Vo->verticalHeaderItem(1);
        ___qtablewidgetitem46->setText(QApplication::translate("Widget", "c1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tb_Vo->verticalHeaderItem(2);
        ___qtablewidgetitem47->setText(QApplication::translate("Widget", "c2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = tb_Vo->verticalHeaderItem(3);
        ___qtablewidgetitem48->setText(QApplication::translate("Widget", "c3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = tb_Vo->verticalHeaderItem(4);
        ___qtablewidgetitem49->setText(QApplication::translate("Widget", "c4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = tb_Vo->verticalHeaderItem(5);
        ___qtablewidgetitem50->setText(QApplication::translate("Widget", "c5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = tb_Vo->verticalHeaderItem(6);
        ___qtablewidgetitem51->setText(QApplication::translate("Widget", "c6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = tb_Vo->verticalHeaderItem(7);
        ___qtablewidgetitem52->setText(QApplication::translate("Widget", "c7", Q_NULLPTR));
        btn_set_acc->setText(QApplication::translate("Widget", "\346\240\207\345\256\232", Q_NULLPTR));
        lb_id->setText(QApplication::translate("Widget", "ID: ", Q_NULLPTR));
        lb_fbnum->setText(QApplication::translate("Widget", "fb_num: 00", Q_NULLPTR));
        lb_conn->setText(QApplication::translate("Widget", "connect..", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
