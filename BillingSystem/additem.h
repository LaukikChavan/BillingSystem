#ifndef ADDITEM_H
#define ADDITEM_H

#include <QWidget>

namespace Ui {
class AddItem;
}

class AddItem : public QWidget
{
    Q_OBJECT

public:
    explicit AddItem(QWidget *parent = nullptr);
    ~AddItem();

private:
    Ui::AddItem *ui;
};

#endif // ADDITEM_H
