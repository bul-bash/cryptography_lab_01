#ifndef PART1DIALOG_H
#define PART1DIALOG_H

#include <QDialog>

namespace Ui {
class Part1Dialog;
}

class Part1Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Part1Dialog(QWidget *parent = 0);
    ~Part1Dialog();

private slots:
    void on_startButton_clicked();

private:
    Ui::Part1Dialog *ui;

    int a;
    int i;
    int j;
    int k;
    int m;


    void initValues();
    int getBit(int k);

    int setResetBit(int k);
    int setBit(int k, int bit, int number);

};

#endif // PART1DIALOG_H
