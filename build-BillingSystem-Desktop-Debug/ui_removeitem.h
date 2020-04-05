/********************************************************************************
** Form generated from reading UI file 'removeitem.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEITEM_H
#define UI_REMOVEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveItem
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *idLine;
    QHBoxLayout *horizontalLayout;
    QPushButton *backBtn;
    QPushButton *okBtn;

    void setupUi(QWidget *RemoveItem)
    {
        if (RemoveItem->objectName().isEmpty())
            RemoveItem->setObjectName(QStringLiteral("RemoveItem"));
        RemoveItem->resize(596, 275);
        verticalLayout_2 = new QVBoxLayout(RemoveItem);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(RemoveItem);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(RemoveItem);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        idLine = new QLineEdit(RemoveItem);
        idLine->setObjectName(QStringLiteral("idLine"));

        horizontalLayout_2->addWidget(idLine);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        backBtn = new QPushButton(RemoveItem);
        backBtn->setObjectName(QStringLiteral("backBtn"));

        horizontalLayout->addWidget(backBtn);

        okBtn = new QPushButton(RemoveItem);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        horizontalLayout->addWidget(okBtn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RemoveItem);

        QMetaObject::connectSlotsByName(RemoveItem);
    } // setupUi

    void retranslateUi(QWidget *RemoveItem)
    {
        RemoveItem->setWindowTitle(QApplication::translate("RemoveItem", "Form", nullptr));
        label_2->setText(QApplication::translate("RemoveItem", "Enter Id Of The Item to be Deleted", nullptr));
        label->setText(QApplication::translate("RemoveItem", "Enter Id :- ", nullptr));
        backBtn->setText(QApplication::translate("RemoveItem", "Back", nullptr));
        okBtn->setText(QApplication::translate("RemoveItem", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveItem: public Ui_RemoveItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEITEM_H
