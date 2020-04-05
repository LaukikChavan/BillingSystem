#include "userdata.h"
#include "ui_userdata.h"

UserData::UserData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserData)
{
    int WIDTH = 700;
    int HEIGHT = 500;
    QDesktopWidget *desktop = QApplication::desktop();
    int screenWidth = desktop->width();
    int screenHeight = desktop->height();

    int x = (screenWidth - WIDTH) / 2;
    int y = (screenHeight - HEIGHT) / 2;

    this->move(x,y);
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/laukik/OOpDatabase/userData.db");
    db.open();
    if(!(db.open())){
        QMessageBox::warning(this,"Warning","Database is not created");
    }
}

UserData::~UserData()
{
    db.close();
    delete ui;
}

void UserData::on_okBtn_clicked()
{
    QSqlQuery *qry = new QSqlQuery(db);
    QString name,phoNo,email;

    name = ui->nameLine->text();
    phoNo = ui->phoneLine->text();
    email = ui->emailLine->text();

    if(!name.isEmpty() && !phoNo.isEmpty() && !email.isEmpty()){
        if(phoNo.length() == 10){
            if(email.contains("@") && email.contains(".com")){
                qry->prepare("INSERT INTO Visters_data (Name, PhnNo, EmailId) VALUES('"+name+"', "+phoNo+", '"+email+"');");
                if(!(qry->exec())){
                    QMessageBox::warning(this,"Failed","Please check if you enter data !!!");
                }
                this->hide();
                UserWin2 *m1;
                m1 = new UserWin2();
                m1->show();
            }else{
                QMessageBox::warning(this,"Email","Invaild Email ID !!!");
            }
           }else{
            QMessageBox::warning(this,"Phone Number","Invaild Number Phone Number should be of 10 digit !!!");
        }
    }else {
        QMessageBox::warning(this,"Null","To Countinue Shopping you must enter your details !!!");
    }
}

void UserData::on_backBtn_clicked()
{
    MainWin m;
    m.setModal(true);
    this->close();
    m.exec();
}
