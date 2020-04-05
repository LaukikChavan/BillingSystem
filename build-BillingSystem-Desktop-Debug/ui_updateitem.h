/********************************************************************************
** Form generated from reading UI file 'updateitem.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEITEM_H
#define UI_UPDATEITEM_H

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

class Ui_UpdateItem
{
public:
    QWidget *layoutWidget;
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

    void setupUi(QWidget *UpdateItem)
    {
        if (UpdateItem->objectName().isEmpty())
            UpdateItem->setObjectName(QStringLiteral("UpdateItem"));
        UpdateItem->resize(619, 309);
        layoutWidget = new QWidget(UpdateItem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(7, 11, 601, 271));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_3->addWidget(label_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        NameLine = new QLineEdit(layoutWidget);
        NameLine->setObjectName(QStringLiteral("NameLine"));

        verticalLayout_2->addWidget(NameLine);

        IdLine = new QLineEdit(layoutWidget);
        IdLine->setObjectName(QStringLiteral("IdLine"));

        verticalLayout_2->addWidget(IdLine);

        PriceLine = new QLineEdit(layoutWidget);
        PriceLine->setObjectName(QStringLiteral("PriceLine"));

        verticalLayout_2->addWidget(PriceLine);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        QutiLine = new QLineEdit(layoutWidget);
        QutiLine->setObjectName(QStringLiteral("QutiLine"));

        verticalLayout_5->addWidget(QutiLine);

        Mani_date = new QDateEdit(layoutWidget);
        Mani_date->setObjectName(QStringLiteral("Mani_date"));

        verticalLayout_5->addWidget(Mani_date);

        Expi_Date = new QDateEdit(layoutWidget);
        Expi_Date->setObjectName(QStringLiteral("Expi_Date"));

        verticalLayout_5->addWidget(Expi_Date);


        horizontalLayout_4->addLayout(verticalLayout_5);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        backBtn = new QPushButton(layoutWidget);
        backBtn->setObjectName(QStringLiteral("backBtn"));

        horizontalLayout_2->addWidget(backBtn);

        okBtn = new QPushButton(layoutWidget);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        horizontalLayout_2->addWidget(okBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(UpdateItem);

        QMetaObject::connectSlotsByName(UpdateItem);
    } // setupUi

    void retranslateUi(QWidget *UpdateItem)
    {
        UpdateItem->setWindowTitle(QApplication::translate("UpdateItem", "Form", nullptr));
        label_7->setText(QApplication::translate("UpdateItem", "Enter New Details Of Old Item", nullptr));
        label->setText(QApplication::translate("UpdateItem", "Name   :- ", nullptr));
        label_2->setText(QApplication::translate("UpdateItem", "Id :-", nullptr));
        label_3->setText(QApplication::translate("UpdateItem", " Price :-    ", nullptr));
        label_4->setText(QApplication::translate("UpdateItem", "Qautity :- ", nullptr));
        label_5->setText(QApplication::translate("UpdateItem", "Manifaturing Date :-  ", nullptr));
        label_6->setText(QApplication::translate("UpdateItem", "Expery Date :- ", nullptr));
        backBtn->setText(QApplication::translate("UpdateItem", "Back", nullptr));
        okBtn->setText(QApplication::translate("UpdateItem", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateItem: public Ui_UpdateItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEITEM_H
