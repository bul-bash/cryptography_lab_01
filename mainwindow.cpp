#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "part1dialog.h"
#include "part2dialog.h"
#include "part3dialog.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionsubPart_1_triggered()
{
    Part1Dialog dialog;
    dialog.exec();
}

void MainWindow::on_actionsubPart_2_triggered()
{
    Part2Dialog dialog;
    dialog.exec();
}

void MainWindow::on_actionsubPart_3_triggered()
{
    Part3Dialog dialog;
    dialog.exec();
}
