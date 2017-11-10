#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calculator.h"
#include "sniffer.h"
calculator *prt;
sniffer *prt1;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    prt=new calculator;
    prt1=new sniffer;
}

MainWindow::~MainWindow()
{
    delete ui;
}

 void MainWindow::on_pushButton_clicked()
{
   prt->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    prt1->show();
}
