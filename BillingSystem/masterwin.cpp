#include "masterwin.h"
#include "ui_masterwin.h"
#include "additem.h"

MasterWin::MasterWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MasterWin)
{
    int WIDTH = 600;
    int HEIGHT = 800;
    QDesktopWidget *desktop = QApplication::desktop();
    int screenWidth = desktop->width();
    int screenHeight = desktop->height();

    int x = (screenWidth - WIDTH) / 2;
    int y = (screenHeight - HEIGHT) / 2;

    this->move(x,y);

    ui->setupUi(this);

    QDateTime UTC(QDateTime::currentDateTimeUtc());
    QDateTime local(UTC.toLocalTime());
    ui->Mani_date->setDate(local.date());
    ui->Expi_Date->setDate(local.date());

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/laukik/OOpDatabase/itemDatabase.db");

    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    db.open();

    qry->prepare("SELECT * FROM Item");
    qry->exec();
    modal->setQuery(*qry);

    ui->tableView->setModel(modal);

    qDebug() << (modal->rowCount());

    if(!(db.open())){
        QMessageBox::warning(this,"Warning","Database is not created");
    }
}

MasterWin::~MasterWin()
{
    delete ui;
    db.close();
}

void MasterWin::on_backBtn_clicked()
{
    MainWin m;
    m.setModal(true);
    this->close();
    m.exec();
}

void MasterWin::updateTable(){
    QSqlQueryModel *modal = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    qry->prepare("SELECT * FROM Item");
    qry->exec();
    modal->setQuery(*qry);

    ui->tableView->setModel(modal);

    qDebug() << (modal->rowCount());

    if(!(db.open())){
        QMessageBox::warning(this,"Warning","Database is not created");
    }
}

void MasterWin::on_updateBtn_clicked()
{
    QSqlQuery *qry = new QSqlQuery(db);
        QString id,name,mani,expc,price,quti;

        id = ui->IdLine->text();
        name = ui->NameLine->text();
        mani = ui->Mani_date->text();
        expc = ui->Expi_Date->text();
        price = ui->PriceLine->text();
        quti = ui->QutiLine->text();

        qry->prepare("UPDATE Item SET Name='"+name+"', Price="+price+", Quantity="+quti+", Mani_Date='"+mani+"', Expc_Date='"+expc+"' WHERE I_No="+id+" ;");
        if(!(qry->exec())){
            QMessageBox::warning(this,"Failed","Please check if you enter data !!!");
        }

        QDateTime UTC(QDateTime::currentDateTimeUtc());
        QDateTime local(UTC.toLocalTime());

        ui->IdLine->setText("");
        ui->NameLine->setText("");
        ui->Mani_date->setDate(local.date());
        ui->Expi_Date->setDate(local.date());
        ui->PriceLine->setText("");
        ui->QutiLine->setText("");
        updateTable();
}

void MasterWin::on_addBtn_clicked()
{
    QSqlQuery *qry = new QSqlQuery(db);
       QString id,name,mani,expc,price,quti;

       id = ui->IdLine->text();
       name = ui->NameLine->text();
       mani = ui->Mani_date->text();
       expc = ui->Expi_Date->text();
       price = ui->PriceLine->text();
       quti = ui->QutiLine->text();

       qry->prepare("INSERT INTO Item (I_No, Name, Price, Quantity, Mani_Date, Expc_Date) VALUES("+id+", '"+name+"', "+price+", "+quti+", '"+mani+"', '"+expc+"');");
       if(!(qry->exec())){
           QMessageBox::warning(this,"Failed","Please check if you enter data !!!");
       }

       QDateTime UTC(QDateTime::currentDateTimeUtc());
       QDateTime local(UTC.toLocalTime());

       ui->IdLine->setText("");
       ui->NameLine->setText("");
       ui->Mani_date->setDate(local.date());
       ui->Expi_Date->setDate(local.date());
       ui->PriceLine->setText("");
       ui->QutiLine->setText("");
       updateTable();
}

void MasterWin::on_removeBtn_clicked()
{
    QSqlQuery *qry = new QSqlQuery(db);
        QString id;

        id = ui->IdLine->text();

        qry->prepare("DELETE FROM Item WHERE I_No="+id+";");
        if(!(qry->exec())){
            QMessageBox::warning(this,"Failed","Please check if you enter wrong number !!!");
        }

        QDateTime UTC(QDateTime::currentDateTimeUtc());
        QDateTime local(UTC.toLocalTime());

        ui->IdLine->setText("");
        ui->NameLine->setText("");
        ui->Mani_date->setDate(local.date());
        ui->Expi_Date->setDate(local.date());
        ui->PriceLine->setText("");
        ui->QutiLine->setText("");
        updateTable();
}
