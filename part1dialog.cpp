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

    ui->binaryRepresentation->setText(QString::number(a, 2));

    ui->aAfterSetK->setText(QString::number(setResetBit(k)));
    ui->k_bit->setText(QString::number(getBit(k)));

    //TODO make func
    int j_bit=getBit(j);
    int i_bit=getBit(i);
    int tmp = setBit(i, j_bit, a);
    tmp=setBit(j, i_bit, tmp);
    ui->aAfterSwap->setText(QString::number(tmp));


    //TODO make func
    int temp=a;
    for (int l=0; l<m; l++){
        temp = setBit(l, 0, temp);

    }
    ui->AAfterResetM->setText(QString::number(temp));
}

int Part1Dialog::getBit(int k){
    return (a >> k) & 1;
}

int Part1Dialog::setResetBit(int k){
    return a ^ (1 << k);
}
int Part1Dialog::setBit(int k, int bit, int number){
    return bit? (number|(1 << k)) : (number&~(1 << k));
//    int tmp = a &~(1 << k);
//    return tmp | (1 << k);
}
