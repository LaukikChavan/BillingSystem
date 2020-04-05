/********************************************************************************
** Form generated from reading UI file 'userdata.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDATA_H
#define UI_USERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserData
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *nameLine;
    QLineEdit *phoneLine;
    QLineEdit *emailLine;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backBtn;
    QPushButton *okBtn;

    void setupUi(QWidget *UserData)
    {
        if (UserData->objectName().isEmpty())
            UserData->setObjectName(QStringLiteral("UserData"));
        UserData->resize(655, 326);
        UserData->setStyleSheet(QLatin1String("*{\n"
"	background-color:  rgb(193, 193, 193);\n"
"	color : rgb(71, 0, 107);\n"
"	font: 75 18pt \"Waree\";\n"
"}\n"
"\n"
"QLabel{\n"
"	border-radius :  27px;\n"
"	background-color : rgb(255, 248, 167);\n"
"	padding: 0px;\n"
"	margins: 0px;\n"
"	padding-left : 10px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	border: 5px solid #a1a1a1;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton#backBtn::hover{\n"
"		background-color : red;\n"
"		border: 4px solid rgb(255, 71, 120);\n"
"}\n"
"\n"
"QPushButton#okBtn::hover{\n"
"		background-color : green;\n"
"		border: 4px solid rgb(182, 255, 143);	\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(UserData);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(UserData);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("*{\n"
"	background-color:  rgb(193, 193, 193);\n"
"	font: 75 italic 28pt \"Amiri\";\n"
"	padding-left: 170px;\n"
"}"));

        verticalLayout_3->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(UserData);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(UserData);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(UserData);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLine = new QLineEdit(UserData);
        nameLine->setObjectName(QStringLiteral("nameLine"));

        verticalLayout->addWidget(nameLine);

        phoneLine = new QLineEdit(UserData);
        phoneLine->setObjectName(QStringLiteral("phoneLine"));

        verticalLayout->addWidget(phoneLine);

        emailLine = new QLineEdit(UserData);
        emailLine->setObjectName(QStringLiteral("emailLine"));

        verticalLayout->addWidget(emailLine);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        backBtn = new QPushButton(UserData);
        backBtn->setObjectName(QStringLiteral("backBtn"));

        horizontalLayout_2->addWidget(backBtn);

        okBtn = new QPushButton(UserData);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        horizontalLayout_2->addWidget(okBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(UserData);

        QMetaObject::connectSlotsByName(UserData);
    } // setupUi

    void retranslateUi(QWidget *UserData)
    {
        UserData->setWindowTitle(QApplication::translate("UserData", "Form", nullptr));
        label_4->setText(QApplication::translate("UserData", "Enter User Details", nullptr));
        label->setText(QApplication::translate("UserData", "Enter Your Name :- ", nullptr));
        label_2->setText(QApplication::translate("UserData", "Enter Phone Number :- ", nullptr));
        label_3->setText(QApplication::translate("UserData", "Enter Email Id :- ", nullptr));
        backBtn->setText(QApplication::translate("UserData", "Back", nullptr));
        okBtn->setText(QApplication::translate("UserData", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserData: public Ui_UserData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDATA_H
