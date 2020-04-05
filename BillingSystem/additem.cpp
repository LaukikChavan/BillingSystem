#include "additem.h"
#include "ui_additem.h"

AddItem::AddItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddItem)
{
    ui->setupUi(this);
}

AddItem::~AddItem()
{
    delete ui;
}
