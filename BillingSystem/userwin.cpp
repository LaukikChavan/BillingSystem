#include "userwin.h"
#include "ui_userwin.h"

UserWin::UserWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserWin)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/laukik/OOpDatabase/itemDatabase.db");

    QSqlQuery *qry = new QSqlQuery(db);
    QSqlRecord recd;
    db.open();

    qry->prepare("SELECT I_No, Name, Price FROM Item");
    qry->exec();

    count = 0;
    while(qry->next()){
        id[count] = qry->value(0).toString();
        name[count] = qry->value(1).toString();
        price[count] = qry->value(2).toString();
        count++;
    }

    for(int i=0; i<=count; i++){
        ui->listWidget->addItem(new QListWidgetItem(name[i]));
    }

}

UserWin::~UserWin()
{
    delete ui;
    db.close();
}

void UserWin::on_backBtn_clicked()
{
    MainWin m;
    m.setModal(true);
    this->close();
    m.exec();
}


