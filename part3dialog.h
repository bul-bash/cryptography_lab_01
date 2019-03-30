#ifndef PART3DIALOG_H
#define PART3DIALOG_H

#include <QDialog>

namespace Ui {
class Part3Dialog;
}

class Part3Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Part3Dialog(QWidget *parent = 0);
    ~Part3Dialog();

private slots:
    void on_startButton_clicked();

private:
    Ui::Part3Dialog *ui;
    int a;
    int byte1;
    int byte2;


    void initValues();
};

#endif // PART3DIALOG_H
