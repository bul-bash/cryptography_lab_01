#include "part1dialog.h"
#include "ui_part1dialog.h"

Part1Dialog::Part1Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Part1Dialog)
{
    ui->setupUi(this);
}

Part1Dialog::~Part1Dialog()
{
    delete ui;
}

void Part1Dialog::initValues(){
    a = ui->a_value->text().toInt();
    i=ui->i_value->text().toInt();
    j=ui->j_value->text().toInt();
    k=ui->k_value->text().toInt();
    m=ui->m_value->text().toInt();
}

void Part1Dialog::on_startButton_clicked(){
    initValues();
    ui->aAfterSetK->setText(QString::number(setResetKBit()));
    ui->k_bit->setText(QString::number(getKBit()));

}

int Part1Dialog::getKBit(){
    return (a >> k) & 1;
}

int Part1Dialog::setResetKBit(){
    return a ^ (1 << k);
}
