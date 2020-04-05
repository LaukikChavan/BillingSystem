#include "updateitem.h"
#include "ui_updateitem.h"

UpdateItem::UpdateItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UpdateItem)
{
    ui->setupUi(this);
}

UpdateItem::~UpdateItem()
{
    delete ui;
}
