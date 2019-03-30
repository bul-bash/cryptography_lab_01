#include "part1dialog.h"
#include "ui_part1dialog.h"
#include"logic.h"

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

    ui->binaryRepresentation->setText(QString::number(a, 2));

    ui->aAfterSetK->setText(QString::number(Logic::setResetBit(a, k)));
    ui->k_bit->setText(QString::number(Logic::getBit(a, k)));

    //TODO make func
    int j_bit=Logic::getBit(a, j);
    int i_bit=Logic::getBit(a, i);
    int tmp = Logic::setBit(i, j_bit, a);
    tmp=Logic::setBit(j, i_bit, tmp);
    ui->aAfterSwap->setText(QString::number(tmp));


    //TODO make func
    int temp=a;
    for (int l=0; l<m; l++){
        temp = Logic::setBit(l, 0, temp);

    }
    ui->AAfterResetM->setText(QString::number(temp));
}


