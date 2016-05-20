#ifndef GRADE_H
#define GRADE_H

#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class grade;
}
class MainWindow;
class grade : public QMainWindow
{
    Q_OBJECT

public:
    explicit grade(QWidget *parent = 0);
    void score(int score);
    ~grade();

private slots:
    void on_home_clicked();

    void on_exit_clicked();

private:
    Ui::grade *ui;
    MainWindow * mainwindowui;
};

#endif // GRADE_H
