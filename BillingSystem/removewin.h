#ifndef REMOVEWIN_H
#define REMOVEWIN_H

#include <QDialog>

namespace Ui {
class removeWin;
}

class removeWin : public QDialog
{
    Q_OBJECT

public:
    explicit removeWin(QWidget *parent = nullptr);
    ~removeWin();

private:
    Ui::removeWin *ui;
};

#endif // REMOVEWIN_H
