#include "grade.h"
#include "drum.h"
#include "ui_grade.h"


grade::grade(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::grade)
{
    ui->setupUi(this);
}

grade::~grade()
{
    delete ui;
}

void grade::score(int score){
    ui->score->setText(QString::number(score));
}

void grade::on_home_clicked()
{
    mainwindowui = new MainWindow();
    mainwindowui->setWindowTitle("是魚の太鼓達人");
    mainwindowui->show();
    close();
}

void grade::on_exit_clicked()
{
    close();
}


