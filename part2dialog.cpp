#include "part2dialog.h"
#include "ui_part2dialog.h"
#include"logic.h"

Part2Dialog::Part2Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Part2Dialog)
{
    ui->setupUi(this);
}

Part2Dialog::~Part2Dialog()
{
    delete ui;
}

void Part2Dialog::initValues(){
    a = ui->a_value->text().toInt();
    i=ui->i_value->text().toInt();
    len=ui->len_value->text().toInt();

}

void Part2Dialog::on_startButton_clicked(){
    initValues();

    ui->binaryRepresentation->setText(QString::number(a, 2));
    int glueBits = Logic::glueKandKbits(a, len, i);
    int betweenBits = Logic::getBitsBetween(a, len, i);
    ui->i_and_i_bits->setText(QString::number(glueBits));
    ui->binGlueBits->setText(QString::number(glueBits, 2));
    ui->between_i_bits->setText(QString::number(betweenBits));
    ui->binBetweenBits->setText(QString::number(betweenBits, 2));
}


