/********************************************************************************
** Form generated from reading UI file 'usermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMAINWINDOW_H
#define UI_USERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *backBtn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserMainWindow)
    {
        if (UserMainWindow->objectName().isEmpty())
            UserMainWindow->setObjectName(QStringLiteral("UserMainWindow"));
        UserMainWindow->resize(671, 651);
        centralwidget = new QWidget(UserMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        backBtn = new QPushButton(centralwidget);
        backBtn->setObjectName(QStringLiteral("backBtn"));
        backBtn->setGeometry(QRect(40, 510, 88, 34));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 0, 551, 491));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        horizontalLayout->addWidget(plainTextEdit);

        UserMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 671, 30));
        UserMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UserMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UserMainWindow->setStatusBar(statusbar);

        retranslateUi(UserMainWindow);

        QMetaObject::connectSlotsByName(UserMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserMainWindow)
    {
        UserMainWindow->setWindowTitle(QApplication::translate("UserMainWindow", "MainWindow", nullptr));
        backBtn->setText(QApplication::translate("UserMainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMainWindow: public Ui_UserMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINWINDOW_H
