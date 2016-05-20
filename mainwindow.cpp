#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "drum.h"
#include <QGraphicsScene>

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
    drumui = new drum();
    drumui->setWindowTitle("是魚の太鼓達人");
    drumui->show();
    close();
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}
