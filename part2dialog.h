#ifndef PART2DIALOG_H
#define PART2DIALOG_H

#include <QDialog>

namespace Ui {
class Part2Dialog;
}

class Part2Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Part2Dialog(QWidget *parent = 0);
    ~Part2Dialog();

private slots:
    void on_startButton_clicked();

private:
    Ui::Part2Dialog *ui;
    int a;
    int i;
    int len;


    void initValues();
};

#endif // PART2DIALOG_H
