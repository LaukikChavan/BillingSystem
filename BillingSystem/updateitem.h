#ifndef UPDATEITEM_H
#define UPDATEITEM_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include<QDateTime>

namespace Ui {
class UpdateItem;
}

class UpdateItem : public QWidget
{
    Q_OBJECT

public:
    explicit UpdateItem(QWidget *parent = nullptr);
    ~UpdateItem();
    QSqlDatabase db;

private:
    Ui::UpdateItem *ui;
};

#endif // UPDATEITEM_H
