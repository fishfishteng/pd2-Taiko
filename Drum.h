#ifndef DRUM_H
#define DRUM_H

#include <QMainWindow>
#include <QGraphicsPixmapItem>
#include <QObject>
#include "grade.h"

namespace Ui {
class drum;
}
class grade;

class drum :public QMainWindow
{
    Q_OBJECT

public:
    explicit drum(QWidget *parent = 0);
    ~drum();

private slots:
    void keyPressEvent(QKeyEvent*event);
    void move();
    void getscore();
    void countdown();


private:
    Ui::drum *ui;
    int a = 3;
    int score = 0;
    int* seconds;
    grade* gradeui;

};

#endif // DRUM_H
