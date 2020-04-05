#include "removewin.h"
#include "ui_removewin.h"

removeWin::removeWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::removeWin)
{
    ui->setupUi(this);
}

removeWin::~removeWin()
{
    delete ui;
}
