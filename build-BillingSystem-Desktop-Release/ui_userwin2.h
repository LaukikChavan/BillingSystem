/********************************************************************************
** Form generated from reading UI file 'userwin2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWIN2_H
#define UI_USERWIN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserWin2
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *beckBtn;
    QPushButton *printerBtn;
    QPushButton *cartBtn;
    QPushButton *clearBtn;

    void setupUi(QWidget *UserWin2)
    {
        if (UserWin2->objectName().isEmpty())
            UserWin2->setObjectName(QStringLiteral("UserWin2"));
        UserWin2->resize(623, 510);
        UserWin2->setStyleSheet(QLatin1String("*{\n"
"	background-color : #989898;\n"
"	padding : 0px;\n"
"	border : 1px solid black;\n"
"	color : rgb(0, 0, 111);\n"
"	font: 63 19pt \"Yrsa SemiBold\";\n"
"}\n"
"\n"
"QLabel{\n"
"		border:2px;\n"
"		padding-left: 2px;\n"
"}\n"
"\n"
"QListWidget{\n"
"	border : 3px solid black;\n"
"}\n"
"\n"
"QPlainTextEdit{\n"
"	border : 3px solid black;\n"
"}\n"
"\n"
"QPushButton{\n"
"	border: 5px solid #878787;\n"
"	border-radius : 15px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"	background-color : yellow;\n"
"}\n"
"\n"
""));
        verticalLayout_2 = new QVBoxLayout(UserWin2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(UserWin2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setStyleSheet(QLatin1String("QListWidget{\n"
"	background-color : gray;	\n"
"}"));

        horizontalLayout->addWidget(listWidget);

        plainTextEdit = new QPlainTextEdit(UserWin2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        horizontalLayout->addWidget(plainTextEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        beckBtn = new QPushButton(UserWin2);
        beckBtn->setObjectName(QStringLiteral("beckBtn"));

        horizontalLayout_2->addWidget(beckBtn);

        printerBtn = new QPushButton(UserWin2);
        printerBtn->setObjectName(QStringLiteral("printerBtn"));

        horizontalLayout_2->addWidget(printerBtn);

        cartBtn = new QPushButton(UserWin2);
        cartBtn->setObjectName(QStringLiteral("cartBtn"));

        horizontalLayout_2->addWidget(cartBtn);

        clearBtn = new QPushButton(UserWin2);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));

        horizontalLayout_2->addWidget(clearBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(UserWin2);

        QMetaObject::connectSlotsByName(UserWin2);
    } // setupUi

    void retranslateUi(QWidget *UserWin2)
    {
        UserWin2->setWindowTitle(QApplication::translate("UserWin2", "Form", nullptr));
        beckBtn->setText(QApplication::translate("UserWin2", "Back", nullptr));
        printerBtn->setText(QApplication::translate("UserWin2", "Print", nullptr));
        cartBtn->setText(QApplication::translate("UserWin2", "Cart", nullptr));
        clearBtn->setText(QApplication::translate("UserWin2", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWin2: public Ui_UserWin2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWIN2_H
