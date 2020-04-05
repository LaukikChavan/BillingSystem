#ifndef MAINWIN_H
#define MAINWIN_H

#include "loginscreen.h"
#include "userwin2.h"
#include "userdata.h"
#include <QDesktopWidget>
#include <QDialog>

namespace Ui {
class MainWin;
}

class MainWin : public QDialog
{
    Q_OBJECT

public:
    explicit MainWin(QWidget *parent = nullptr);
    ~MainWin();

private slots:
    void on_userBtn_clicked();

    void on_MasterBtn_clicked();

private:
    Ui::MainWin *ui;
};

#endif // MAINWIN_H
