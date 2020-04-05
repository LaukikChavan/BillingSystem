/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *userBtn;
    QPushButton *MasterBtn;

    void setupUi(QDialog *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName(QStringLiteral("MainWin"));
        MainWin->resize(619, 440);
        MainWin->setStyleSheet(QLatin1String("*{\n"
"	background-color: #c3c3c3;\n"
"}\n"
"QPushButton{\n"
"	border : 5px solid #b2b2b2;\n"
"	border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"	background-color: green;\n"
"}\n"
"\n"
"QPushButton::clicked{\n"
"	background-color: rgb(255, 255, 0);	\n"
"}\n"
"\n"
"QLabel{\n"
"	font: 75 35pt \"Yrsa\";\n"
"	color : rgb(85, 85, 255);\n"
"	border: 2px solid #d6d6d6;\n"
"	padding:10px;\n"
"	padding-left: 25px;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(MainWin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(MainWin);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Yrsa"));
        font.setPointSize(35);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        userBtn = new QPushButton(MainWin);
        userBtn->setObjectName(QStringLiteral("userBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userBtn->sizePolicy().hasHeightForWidth());
        userBtn->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        userBtn->setIcon(icon);
        userBtn->setIconSize(QSize(230, 230));
        userBtn->setFlat(true);

        horizontalLayout->addWidget(userBtn);

        MasterBtn = new QPushButton(MainWin);
        MasterBtn->setObjectName(QStringLiteral("MasterBtn"));
        sizePolicy.setHeightForWidth(MasterBtn->sizePolicy().hasHeightForWidth());
        MasterBtn->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/shop.png"), QSize(), QIcon::Normal, QIcon::Off);
        MasterBtn->setIcon(icon1);
        MasterBtn->setIconSize(QSize(230, 230));
        MasterBtn->setFlat(true);

        horizontalLayout->addWidget(MasterBtn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MainWin);

        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QDialog *MainWin)
    {
        MainWin->setWindowTitle(QApplication::translate("MainWin", "Dialog", nullptr));
        label->setText(QApplication::translate("MainWin", "Are Your a Buyer or Owner ?", nullptr));
        userBtn->setText(QString());
        MasterBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
