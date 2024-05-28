#include "main03.h"
#include "ui_main03.h"

main03::main03(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::main03)
{
    ui->setupUi(this);
}

main03::~main03()
{
    delete ui;
}


void main03::on_pushButton_clicked()
{
    ui->lineEdit->setText("AAAAA");
}

