#ifndef MASTERWIN_H
#define MASTERWIN_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDateTime>

#include "mainwin.h"

namespace Ui {
class MasterWin;
}

class MasterWin : public QDialog
{
    Q_OBJECT

public:
    explicit MasterWin(QWidget *parent = nullptr);
    ~MasterWin();
    QSqlDatabase db;

private slots:
    void on_backBtn_clicked();

    void on_updateBtn_clicked();

    void on_addBtn_clicked();

    void on_removeBtn_clicked();

private:
    Ui::MasterWin *ui;
    void updateTable();
};

#endif // MASTERWIN_H
