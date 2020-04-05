#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
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

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_userBtn_clicked()
{
    this->hide();
    UserData *m1;
    m1 = new UserData();
    m1->show();
}

void MainWindow::on_MasterBtn_clicked()
{
    this->hide();
    LoginScreen m;
    m.show();
    m.exec();
}
