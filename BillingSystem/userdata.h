#ifndef USERDATA_H
#define USERDATA_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDesktopWidget>
#include "userwin2.h"

namespace Ui {
class UserData;
}

class UserData : public QWidget
{
    Q_OBJECT

public:
    explicit UserData(QWidget *parent = nullptr);
    ~UserData();
    QSqlDatabase db;

private slots:
    void on_okBtn_clicked();

    void on_backBtn_clicked();

private:
    Ui::UserData *ui;
};

#endif // USERDATA_H
