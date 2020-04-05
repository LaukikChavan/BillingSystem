#include "userwin2.h"
#include "ui_userwin2.h"

UserWin2::UserWin2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserWin2)
{
    int WIDTH = 600;
    int HEIGHT = 600;
    QDesktopWidget *desktop = QApplication::desktop();
    int screenWidth = desktop->width();
    int screenHeight = desktop->height();

    int x = (screenWidth - WIDTH) / 2;
    int y = (screenHeight - HEIGHT) / 2;

    this->move(x,y);
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

    for(int i=0; i<count; i++){
        ui->listWidget->addItem(new QListWidgetItem(name[i]));
    }
}

UserWin2::~UserWin2()
{
    delete ui;
}

void UserWin2::on_beckBtn_clicked()
{
    MainWin m;
    m.setModal(true);
    this->close();
    m.exec();
}

void UserWin2::on_listWidget_itemClicked(QListWidgetItem *item)
{
    QString temp = item->text();
    QString display;
    int i = 0,flag = 0,deleteNo;
    for(i=0;i<=count2;i++){
        if(temp.compare(a[i]) == 0){
            flag = 1;
            ui->listWidget->currentItem()->setBackgroundColor(989898);
            deleteNo = i;
        }
    }
    if(flag == 0){
        ui->listWidget->currentItem()->setBackgroundColor(Qt::green);
        a[count2] = temp;
        count2++;
    }
    else{
        if(deleteNo != count2){
            for(i=0;i<count2;i++){
                if(i >= deleteNo){
                    a[i] = a[i+1];
                }
            }
        }
        count2--;
    }
    for(i=0;i<=count2;i++){
        display += a[i] + "\n";
    }
    ui->plainTextEdit->setPlainText(display);
}

void UserWin2::on_cartBtn_clicked()
{
    if(count2 != 0){
        QString pr[100],display;
        float t = 0.0, gt = 0.0;
        int sss = 0;
        for(int i=0;i<count;i++){
            for(int j=0;j<count;j++){
                if(a[i].compare(name[j]) == 0){
                    pr[sss] = price[j];
                    sss++;
                }
            }
        }
        display = "Name\t\tPrice\n";
        for(int i=0;i<=count2;i++){
            display += a[i] + "\t\t" + pr[i] + "\n";
            t += pr[i].toFloat();
            qDebug() << t;
        }
        display += "\nTotal :- " + QString::number(t);
        gt = (t/100) * 18;
        gt += t;
        display += "\nCGST :- 6%";
        display += "\nSGST :- 6%";
        display += "\nIGST :- 0%";
        display += "\nGrand Total :- " + QString::number(gt);
        ui->plainTextEdit->setPlainText(display);
    }else{
        QMessageBox::warning(this,"Nothing","You Select Nothing so first select the items !");
    }
}

void UserWin2::on_clearBtn_clicked()
{
    this->hide();
    UserWin2 *m1;
    m1 = new UserWin2();
    m1->show();
}

void UserWin2::on_printerBtn_clicked()
{
    if(!ui->plainTextEdit->toPlainText().isEmpty()){
        QDateTime UTC(QDateTime::currentDateTimeUtc());
        QDateTime local(UTC.toLocalTime());
        QString temps = local.toString();
        QString filename = "/home/laukik/Desktop/File-"+temps+".txt";
        QFile file(filename);
        if(!file.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this, "Warning", "Cannot save file : " + file.errorString());
            return;
        }
        QTextStream out(&file);
        QString text = ui->plainTextEdit->toPlainText();
        out << text;
        QMessageBox::information(this,"File Is Saved","Your bill is saved on the Desktop so If you don't Want to print you can quit that");
        QPrinter printer;
        printer.setPrinterName("Printer Name");
        QPrintDialog pDialog(&printer, this);
        if(pDialog.exec() == QDialog::Rejected){
            QMessageBox::warning(this,"Warning","cannont access Printer");
            return;
        }
        ui->plainTextEdit->print(&printer);
        file.close();
        QMessageBox::information(this,"Done","Printing is Done");
    }else{
        QMessageBox::warning(this,"Nothing","You Select Nothing so first select the items !");
    }
}
