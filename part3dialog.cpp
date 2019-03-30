#include "part3dialog.h"
#include "ui_part3dialog.h"
#include "logic.h"

Part3Dialog::Part3Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Part3Dialog)
{
    ui->setupUi(this);
}

Part3Dialog::~Part3Dialog()
{
    delete ui;
}

void Part3Dialog::initValues(){
    a = ui->a_value->text().toInt();
    byte1=ui->byte1_value->text().toInt();
    byte2=ui->byte2_value->text().toInt();

}

void Part3Dialog::on_startButton_clicked(){
    initValues();

    ui->binaryRepresentation->setText(QString::number(a, 2));
    int swap = Logic::swapBytes(a, byte1, byte2);

    ui->swap->setText(QString::number(swap));
    ui->binSwap->setText(QString::number(swap, 2));

}

