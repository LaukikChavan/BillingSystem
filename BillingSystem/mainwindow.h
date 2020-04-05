#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopWidget>
#include "masterwin.h"
#include "loginscreen.h"
#include "userwin2.h"
#include "userdata.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_userBtn_clicked();

    void on_MasterBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
