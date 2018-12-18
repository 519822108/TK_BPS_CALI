/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *DevType;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *CanIndex;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *BoardRate;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *PortIndex;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName(QStringLiteral("DialogLogin"));
        DialogLogin->resize(277, 103);
        gridLayout = new QGridLayout(DialogLogin);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DialogLogin);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        DevType = new QComboBox(DialogLogin);
        DevType->setObjectName(QStringLiteral("DevType"));

        horizontalLayout->addWidget(DevType);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(DialogLogin);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        CanIndex = new QComboBox(DialogLogin);
        CanIndex->setObjectName(QStringLiteral("CanIndex"));

        horizontalLayout_2->addWidget(CanIndex);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(DialogLogin);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        BoardRate = new QComboBox(DialogLogin);
        BoardRate->setObjectName(QStringLiteral("BoardRate"));

        horizontalLayout_3->addWidget(BoardRate);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(DialogLogin);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        PortIndex = new QComboBox(DialogLogin);
        PortIndex->setObjectName(QStringLiteral("PortIndex"));

        horizontalLayout_4->addWidget(PortIndex);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(89, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton = new QPushButton(DialogLogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_5->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(89, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 2);


        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QApplication::translate("DialogLogin", "login", Q_NULLPTR));
        label->setText(QApplication::translate("DialogLogin", "\350\256\276\345\244\207:", Q_NULLPTR));
        DevType->clear();
        DevType->insertItems(0, QStringList()
         << QApplication::translate("DialogLogin", "USB_CAN_2E", Q_NULLPTR)
         << QApplication::translate("DialogLogin", "USB_CAN_E", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("DialogLogin", "\350\256\276\345\244\207\345\217\267:", Q_NULLPTR));
        CanIndex->clear();
        CanIndex->insertItems(0, QStringList()
         << QApplication::translate("DialogLogin", "CAN0", Q_NULLPTR)
         << QApplication::translate("DialogLogin", "CAN1", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("DialogLogin", "\346\263\242\347\211\271\347\216\207:", Q_NULLPTR));
        BoardRate->clear();
        BoardRate->insertItems(0, QStringList()
         << QApplication::translate("DialogLogin", "250Kb/s", Q_NULLPTR)
         << QApplication::translate("DialogLogin", "125Kb/s", Q_NULLPTR)
         << QApplication::translate("DialogLogin", "500Kb/s", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("DialogLogin", "\347\253\257\345\217\243\345\217\267:", Q_NULLPTR));
        PortIndex->clear();
        PortIndex->insertItems(0, QStringList()
         << QApplication::translate("DialogLogin", "Port0", Q_NULLPTR)
         << QApplication::translate("DialogLogin", "Port1", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("DialogLogin", "\345\220\257\345\212\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
