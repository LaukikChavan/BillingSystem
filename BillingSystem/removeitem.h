#ifndef REMOVEITEM_H
#define REMOVEITEM_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include<QDateTime>

namespace Ui {
class RemoveItem;
}

class RemoveItem : public QWidget
{
    Q_OBJECT

public:
    explicit RemoveItem(QWidget *parent = nullptr);
    ~RemoveItem();
    QSqlDatabase db;

private:
    Ui::RemoveItem *ui;
};

#endif // REMOVEITEM_H
