/********************************************************************************
** Form generated from reading UI file 'additem.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddItem
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *NameLine;
    QLineEdit *IdLine;
    QLineEdit *PriceLine;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *QutiLine;
    QDateEdit *Mani_date;
    QDateEdit *Expi_Date;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backBtn;
    QPushButton *okBtn;

    void setupUi(QWidget *AddItem)
    {
        if (AddItem->objectName().isEmpty())
            AddItem->setObjectName(QStringLiteral("AddItem"));
        AddItem->resize(750, 284);
        verticalLayout_6 = new QVBoxLayout(AddItem);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(AddItem);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_3->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AddItem);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(AddItem);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(AddItem);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        NameLine = new QLineEdit(AddItem);
        NameLine->setObjectName(QStringLiteral("NameLine"));

        verticalLayout_2->addWidget(NameLine);

        IdLine = new QLineEdit(AddItem);
        IdLine->setObjectName(QStringLiteral("IdLine"));

        verticalLayout_2->addWidget(IdLine);

        PriceLine = new QLineEdit(AddItem);
        PriceLine->setObjectName(QStringLiteral("PriceLine"));

        verticalLayout_2->addWidget(PriceLine);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(AddItem);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(AddItem);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        label_6 = new QLabel(AddItem);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        QutiLine = new QLineEdit(AddItem);
        QutiLine->setObjectName(QStringLiteral("QutiLine"));

        verticalLayout_5->addWidget(QutiLine);

        Mani_date = new QDateEdit(AddItem);
        Mani_date->setObjectName(QStringLiteral("Mani_date"));

        verticalLayout_5->addWidget(Mani_date);

        Expi_Date = new QDateEdit(AddItem);
        Expi_Date->setObjectName(QStringLiteral("Expi_Date"));

        verticalLayout_5->addWidget(Expi_Date);


        horizontalLayout_4->addLayout(verticalLayout_5);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        backBtn = new QPushButton(AddItem);
        backBtn->setObjectName(QStringLiteral("backBtn"));

        horizontalLayout_2->addWidget(backBtn);

        okBtn = new QPushButton(AddItem);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        horizontalLayout_2->addWidget(okBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_3);


        retranslateUi(AddItem);

        QMetaObject::connectSlotsByName(AddItem);
    } // setupUi

    void retranslateUi(QWidget *AddItem)
    {
        AddItem->setWindowTitle(QApplication::translate("AddItem", "Form", nullptr));
        label_7->setText(QApplication::translate("AddItem", "Enter Details Of New Item", nullptr));
        label->setText(QApplication::translate("AddItem", "Name   :- ", nullptr));
        label_2->setText(QApplication::translate("AddItem", "Id :-", nullptr));
        label_3->setText(QApplication::translate("AddItem", " Price :-    ", nullptr));
        label_4->setText(QApplication::translate("AddItem", "Qautity :- ", nullptr));
        label_5->setText(QApplication::translate("AddItem", "Manifaturing Date :-  ", nullptr));
        label_6->setText(QApplication::translate("AddItem", "Expery Date :- ", nullptr));
        backBtn->setText(QApplication::translate("AddItem", "Back", nullptr));
        okBtn->setText(QApplication::translate("AddItem", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItem: public Ui_AddItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
