/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *userBtn;
    QPushButton *MasterBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(630, 429);
        MainWindow->setStyleSheet(QLatin1String("*{\n"
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
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
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
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        userBtn = new QPushButton(centralWidget);
        userBtn->setObjectName(QStringLiteral("userBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userBtn->sizePolicy().hasHeightForWidth());
        userBtn->setSizePolicy(sizePolicy);
        userBtn->setAutoFillBackground(false);
        userBtn->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        userBtn->setIcon(icon);
        userBtn->setIconSize(QSize(230, 230));
        userBtn->setFlat(true);

        horizontalLayout->addWidget(userBtn);

        MasterBtn = new QPushButton(centralWidget);
        MasterBtn->setObjectName(QStringLiteral("MasterBtn"));
        sizePolicy.setHeightForWidth(MasterBtn->sizePolicy().hasHeightForWidth());
        MasterBtn->setSizePolicy(sizePolicy);
        MasterBtn->setLayoutDirection(Qt::LeftToRight);
        MasterBtn->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/shop.png"), QSize(), QIcon::Normal, QIcon::Off);
        MasterBtn->setIcon(icon1);
        MasterBtn->setIconSize(QSize(230, 230));
        MasterBtn->setAutoDefault(false);
        MasterBtn->setFlat(true);

        horizontalLayout->addWidget(MasterBtn);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        MasterBtn->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Are Your a Buyer or Owner ?", nullptr));
        userBtn->setText(QString());
        MasterBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
