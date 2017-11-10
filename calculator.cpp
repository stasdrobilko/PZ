#include "calculator.h"
#include "ui_calculator.h"
int n=1,a,b,c;
int op=0;
calculator::calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}

void calculator::on_pushButton_4_clicked()
{
    ui->lineEdit->insert("1");
}

void calculator::on_pushButton_3_clicked()
{
    ui->lineEdit->insert("2");
}

void calculator::on_pushButton_2_clicked()
{
    ui->lineEdit->insert("3");
}

void calculator::on_pushButton_6_clicked()
{
    ui->lineEdit->insert("4");
}

void calculator::on_pushButton_5_clicked()
{
    ui->lineEdit->insert("5");
}

void calculator::on_pushButton_7_clicked()
{
    ui->lineEdit->insert("6");
}

void calculator::on_pushButton_8_clicked()
{
    ui->lineEdit->insert("7");
}

void calculator::on_pushButton_11_clicked()
{
    ui->lineEdit->insert("8");
}

void calculator::on_pushButton_10_clicked()
{
    ui->lineEdit->insert("9");
}

void calculator::on_pushButton_9_clicked()
{
    ui->lineEdit->insert("0");
}

void calculator::on_pushButton_13_clicked()
{
    ui->lineEdit->insert(".");
}

void calculator::on_pushButton_12_clicked()
  {
    a=ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
   op=1;
  }

void calculator::on_pushButton_17_clicked()
{   a=ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    op=2;
}

void calculator::on_pushButton_14_clicked()
{a=ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    op=3;
}

void calculator::on_pushButton_16_clicked()
{a=ui->lineEdit->text().toDouble();
    ui->lineEdit->clear();
    op=4;
}

void calculator::on_pushButton_18_clicked()
{
    ui->lineEdit->clear();
}

void calculator::on_pushButton_15_clicked()
{  b=ui->lineEdit->text().toDouble();
   switch(op)
    {
        case 1:c=a+b;ui->lineEdit->setText(QString::number(c));break;
        case 2:c=a-b;ui->lineEdit->setText(QString::number(c));break;
        case 3:c=a*b;ui->lineEdit->setText(QString::number(c));break;
        case 4:c=a/b;ui->lineEdit->setText(QString::number(c));break;
    }
}
