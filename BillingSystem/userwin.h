#ifndef USERWIN_H
#define USERWIN_H

#include <QDialog>
#include "mainwin.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <qlistwidget.h>

namespace Ui {
class UserWin;
}

class UserWin : public QDialog
{
    Q_OBJECT

public:
    explicit UserWin(QWidget *parent = nullptr);
    ~UserWin();
    QSqlDatabase db;
    QString id[100],name[100],price[100];
    int count;

private slots:
    void on_backBtn_clicked();

private:
    Ui::UserWin *ui;
};

#endif // USERWIN_H
