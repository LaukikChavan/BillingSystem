#include "mainwin.h"
#include "ui_mainwin.h"

MainWin::MainWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainWin)
{
    int WIDTH = 600;
    int HEIGHT = 500;
    QDesktopWidget *desktop = QApplication::desktop();
    int screenWidth = desktop->width();
    int screenHeight = desktop->height();

    int x = (screenWidth - WIDTH) / 2;
    int y = (screenHeight - HEIGHT) / 2;

    this->move(x,y);
    ui->setupUi(this);
}

MainWin::~MainWin()
{
    delete ui;
}



void MainWin::on_userBtn_clicked()
{
    this->hide();
    UserData *m1;
    m1 = new UserData();
    m1->show();
}

void MainWin::on_MasterBtn_clicked()
{
    this->hide();
    LoginScreen m;
    m.setModal(true);
    m.exec();
}
