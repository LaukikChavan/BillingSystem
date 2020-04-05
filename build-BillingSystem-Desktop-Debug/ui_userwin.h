/********************************************************************************
** Form generated from reading UI file 'userwin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWIN_H
#define UI_USERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *backBtn;
    QPushButton *printBtn;
    QPushButton *cartBtn;
    QPushButton *clearBtn;

    void setupUi(QDialog *UserWin)
    {
        if (UserWin->objectName().isEmpty())
            UserWin->setObjectName(QStringLiteral("UserWin"));
        UserWin->resize(670, 557);
        verticalLayout_2 = new QVBoxLayout(UserWin);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listWidget = new QListWidget(UserWin);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout_2->addWidget(listWidget);

        plainTextEdit = new QPlainTextEdit(UserWin);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        horizontalLayout_2->addWidget(plainTextEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        backBtn = new QPushButton(UserWin);
        backBtn->setObjectName(QStringLiteral("backBtn"));

        horizontalLayout->addWidget(backBtn);

        printBtn = new QPushButton(UserWin);
        printBtn->setObjectName(QStringLiteral("printBtn"));

        horizontalLayout->addWidget(printBtn);

        cartBtn = new QPushButton(UserWin);
        cartBtn->setObjectName(QStringLiteral("cartBtn"));

        horizontalLayout->addWidget(cartBtn);

        clearBtn = new QPushButton(UserWin);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));

        horizontalLayout->addWidget(clearBtn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(UserWin);

        QMetaObject::connectSlotsByName(UserWin);
    } // setupUi

    void retranslateUi(QDialog *UserWin)
    {
        UserWin->setWindowTitle(QApplication::translate("UserWin", "Dialog", nullptr));
        backBtn->setText(QApplication::translate("UserWin", "Back", nullptr));
        printBtn->setText(QApplication::translate("UserWin", "Print", nullptr));
        cartBtn->setText(QApplication::translate("UserWin", "Cart", nullptr));
        clearBtn->setText(QApplication::translate("UserWin", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWin: public Ui_UserWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWIN_H
