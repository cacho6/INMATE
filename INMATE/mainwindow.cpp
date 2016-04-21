#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogedit1.h"

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

void MainWindow::on_pushButton_clicked()
{
    DialogEdit1 edit_1;
    edit_1.setModal(true);
    edit_1.exec();
}
