#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QDialog>
#include "mainwindow.h"
#include "mainwin.h"
#include <QMessageBox>

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QDialog
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = nullptr);
    ~LoginScreen();

private slots:

    void on_loginBtn_clicked();

    void on_backBtn_clicked();

private:
    Ui::LoginScreen *ui;
    QString id, pswd;
};

#endif // LOGINSCREEN_H
