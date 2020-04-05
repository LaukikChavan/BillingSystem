/********************************************************************************
** Form generated from reading UI file 'masterwin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERWIN_H
#define UI_MASTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MasterWin
{
public:
    QVBoxLayout *verticalLayout_6;
    QTableView *tableView;
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
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addBtn;
    QPushButton *removeBtn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backBtn;
    QPushButton *updateBtn;

    void setupUi(QDialog *MasterWin)
    {
        if (MasterWin->objectName().isEmpty())
            MasterWin->setObjectName(QStringLiteral("MasterWin"));
        MasterWin->resize(812, 614);
        MasterWin->setStyleSheet(QLatin1String("*{\n"
"	background-color : #989898;\n"
"	padding : 0px;\n"
"	border : 0px;\n"
"	color : rgb(0, 0, 111);\n"
"	font: 63 19pt \"Yrsa SemiBold\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border : 3px solid #888888;\n"
"}\n"
"\n"
"QDateEdit{\n"
"	border : 3px solid #888888;\n"
"}\n"
"\n"
"QLabel{\n"
"		border:2px;\n"
"		padding-left: 2px;\n"
"}\n"
"\n"
"QTableView{\n"
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
        verticalLayout_6 = new QVBoxLayout(MasterWin);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tableView = new QTableView(MasterWin);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_6->addWidget(tableView);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(MasterWin);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(MasterWin);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(MasterWin);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        NameLine = new QLineEdit(MasterWin);
        NameLine->setObjectName(QStringLiteral("NameLine"));

        verticalLayout_2->addWidget(NameLine);

        IdLine = new QLineEdit(MasterWin);
        IdLine->setObjectName(QStringLiteral("IdLine"));

        verticalLayout_2->addWidget(IdLine);

        PriceLine = new QLineEdit(MasterWin);
        PriceLine->setObjectName(QStringLiteral("PriceLine"));

        verticalLayout_2->addWidget(PriceLine);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(MasterWin);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(MasterWin);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        label_6 = new QLabel(MasterWin);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        QutiLine = new QLineEdit(MasterWin);
        QutiLine->setObjectName(QStringLiteral("QutiLine"));

        verticalLayout_5->addWidget(QutiLine);

        Mani_date = new QDateEdit(MasterWin);
        Mani_date->setObjectName(QStringLiteral("Mani_date"));

        verticalLayout_5->addWidget(Mani_date);

        Expi_Date = new QDateEdit(MasterWin);
        Expi_Date->setObjectName(QStringLiteral("Expi_Date"));

        verticalLayout_5->addWidget(Expi_Date);


        horizontalLayout_4->addLayout(verticalLayout_5);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        addBtn = new QPushButton(MasterWin);
        addBtn->setObjectName(QStringLiteral("addBtn"));

        horizontalLayout_3->addWidget(addBtn);

        removeBtn = new QPushButton(MasterWin);
        removeBtn->setObjectName(QStringLiteral("removeBtn"));

        horizontalLayout_3->addWidget(removeBtn);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        backBtn = new QPushButton(MasterWin);
        backBtn->setObjectName(QStringLiteral("backBtn"));

        horizontalLayout_2->addWidget(backBtn);

        updateBtn = new QPushButton(MasterWin);
        updateBtn->setObjectName(QStringLiteral("updateBtn"));

        horizontalLayout_2->addWidget(updateBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_3);


        retranslateUi(MasterWin);

        QMetaObject::connectSlotsByName(MasterWin);
    } // setupUi

    void retranslateUi(QDialog *MasterWin)
    {
        MasterWin->setWindowTitle(QApplication::translate("MasterWin", "Dialog", nullptr));
        label->setText(QApplication::translate("MasterWin", "Name   :- ", nullptr));
        label_2->setText(QApplication::translate("MasterWin", "Id :-", nullptr));
        label_3->setText(QApplication::translate("MasterWin", " Price :-    ", nullptr));
        label_4->setText(QApplication::translate("MasterWin", "Qautity :- ", nullptr));
        label_5->setText(QApplication::translate("MasterWin", "Manifaturing Date :-  ", nullptr));
        label_6->setText(QApplication::translate("MasterWin", "Expery Date :- ", nullptr));
        addBtn->setText(QApplication::translate("MasterWin", "Add", nullptr));
        removeBtn->setText(QApplication::translate("MasterWin", "Remove", nullptr));
        backBtn->setText(QApplication::translate("MasterWin", "Back", nullptr));
        updateBtn->setText(QApplication::translate("MasterWin", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MasterWin: public Ui_MasterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERWIN_H
