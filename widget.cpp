#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Calculadora");
    ui->resultado->setText("0,0");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_Suma_clicked()
{
    QString n1String = ui->n1->text();
    QString n2String = ui->n2->text();
    float n1Number = n1String.toFloat();
    float n2Number = n2String.toFloat();
    ui->resultado->setText(QString::number(n1Number + n2Number));
}


void Widget::on_Resto_clicked()
{
    QString n1String = ui->n1->text();
    QString n2String = ui->n2->text();
    float n1Number = n1String.toFloat();
    float n2Number = n2String.toFloat();
    ui->resultado->setText(QString::number(n1Number - n2Number));
}


void Widget::on_Multiplicar_clicked()
{
    QString n1String = ui->n1->text();
    QString n2String = ui->n2->text();
    float n1Number = n1String.toFloat();
    float n2Number = n2String.toFloat();
    ui->resultado->setText(QString::number(n1Number * n2Number));
}


void Widget::on_Dividir_clicked()
{
    QString n1String = ui->n1->text();
    QString n2String = ui->n2->text();
    float n1Number = n1String.toFloat();
    float n2Number = n2String.toFloat();
    ui->resultado->setText(QString::number(n1Number / n2Number));
}

