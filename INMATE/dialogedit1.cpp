#include "dialogedit1.h"
#include "ui_dialogedit1.h"

DialogEdit1::DialogEdit1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEdit1)
{
    ui->setupUi(this);
}

DialogEdit1::~DialogEdit1()
{
    delete ui;
}
