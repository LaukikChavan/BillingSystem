#ifndef USERWIN2_H
#define USERWIN2_H

#include <QWidget>
#include "mainwin.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <qlistwidget.h>
#include<QPrinter>
#include<QPrintDialog>
#include<QFile>
#include<QFileDialog>
#include<QTextStream>
#include<QDateTime>

namespace Ui {
class UserWin2;
}

class UserWin2 : public QWidget
{
    Q_OBJECT

public:
    explicit UserWin2(QWidget *parent = nullptr);
    ~UserWin2();
    QSqlDatabase db;
    QString id[100],name[100],price[100],a[100];
    QString currentFile = "";
    int count,count2=0;
    QDateTime qdt;

private slots:
    void on_beckBtn_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_cartBtn_clicked();

    void on_clearBtn_clicked();

    void on_printerBtn_clicked();

private:
    Ui::UserWin2 *ui;
};

#endif // USERWIN2_H
