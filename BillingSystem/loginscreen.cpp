#include "loginscreen.h"
#include "ui_loginscreen.h"

LoginScreen::LoginScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginScreen)
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
    id = "laukik";
    pswd = "123";
}

LoginScreen::~LoginScreen()
{
    delete ui;
}

void LoginScreen::on_loginBtn_clicked()
{
    if(id.compare(ui->idTxt->text()) == 0 && pswd.compare(ui->pswdTxt->text()) == 0){
        MasterWin m;
        m.setModal(true);
        this->close();
        m.exec();
    }
    else{
        QMessageBox::warning(this,"Warning","Id or password not matched ");
    }
}

void LoginScreen::on_backBtn_clicked()
{
    MainWin m;
    m.setModal(true);
    this->close();
    m.exec();
}
