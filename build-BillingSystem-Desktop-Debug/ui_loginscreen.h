/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *idTxt;
    QLineEdit *pswdTxt;
    QGridLayout *gridLayout_2;
    QPushButton *loginBtn;
    QPushButton *backBtn;

    void setupUi(QDialog *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QStringLiteral("LoginScreen"));
        LoginScreen->resize(564, 314);
        LoginScreen->setStyleSheet(QLatin1String("*{\n"
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
"QPushButton#loginBtn::hover{\n"
"		background-color : green;\n"
"		border: 4px solid rgb(182, 255, 143);	\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(LoginScreen);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(LoginScreen);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Amiri"));
        font.setPointSize(28);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(9);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("*{\n"
"	background-color:  rgb(193, 193, 193);\n"
"	font: 75 italic 28pt \"Amiri\";\n"
"	padding-left: 170px;\n"
"}"));

        verticalLayout_3->addWidget(label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(LoginScreen);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(LoginScreen);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        idTxt = new QLineEdit(LoginScreen);
        idTxt->setObjectName(QStringLiteral("idTxt"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(idTxt->sizePolicy().hasHeightForWidth());
        idTxt->setSizePolicy(sizePolicy2);
        idTxt->setStyleSheet(QLatin1String("*{\n"
"	backgroun-colo:red;\n"
"}"));

        verticalLayout_2->addWidget(idTxt);

        pswdTxt = new QLineEdit(LoginScreen);
        pswdTxt->setObjectName(QStringLiteral("pswdTxt"));
        sizePolicy2.setHeightForWidth(pswdTxt->sizePolicy().hasHeightForWidth());
        pswdTxt->setSizePolicy(sizePolicy2);
        pswdTxt->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(pswdTxt);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        loginBtn = new QPushButton(LoginScreen);
        loginBtn->setObjectName(QStringLiteral("loginBtn"));
        sizePolicy2.setHeightForWidth(loginBtn->sizePolicy().hasHeightForWidth());
        loginBtn->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(loginBtn, 0, 1, 1, 1);

        backBtn = new QPushButton(LoginScreen);
        backBtn->setObjectName(QStringLiteral("backBtn"));
        sizePolicy2.setHeightForWidth(backBtn->sizePolicy().hasHeightForWidth());
        backBtn->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(backBtn, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);


        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QDialog *LoginScreen)
    {
        LoginScreen->setWindowTitle(QApplication::translate("LoginScreen", "Dialog", nullptr));
        label_3->setText(QApplication::translate("LoginScreen", "Login Screen", nullptr));
        label->setText(QApplication::translate("LoginScreen", "Enter Id :- ", nullptr));
        label_2->setText(QApplication::translate("LoginScreen", "Password :-                 ", nullptr));
        pswdTxt->setInputMask(QString());
        loginBtn->setText(QApplication::translate("LoginScreen", "Login", nullptr));
        backBtn->setText(QApplication::translate("LoginScreen", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
