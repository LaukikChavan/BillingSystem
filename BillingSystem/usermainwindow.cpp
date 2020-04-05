#include "usermainwindow.h"
#include "ui_usermainwindow.h"

UserMainWindow::UserMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserMainWindow)
{
    ui->setupUi(this);
}

UserMainWindow::~UserMainWindow()
{
    delete ui;
}

void UserMainWindow::on_backBtn_clicked()
{
    MainWin m;
    m.setModal(true);
    this->close();
    m.exec();
}
