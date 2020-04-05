#ifndef USERMAINWINDOW_H
#define USERMAINWINDOW_H

#include <QMainWindow>
#include <qlistwidget.h>

namespace Ui {
class UserMainWindow;
}

class UserMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserMainWindow(QWidget *parent = nullptr);
    ~UserMainWindow();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::UserMainWindow *ui;
};

#endif // USERMAINWINDOW_H
