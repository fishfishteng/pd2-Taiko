#include "drum.h"
#include "ui_drum.h"
#include <QGraphicsScene>
#include <QTimer>
#include <QList>
#include <QKeyEvent>
#include <QApplication>
#include <QGraphicsView>
#include <QFont>
#include <QImage>


drum::drum(QWidget *parent):QMainWindow(parent),
    ui(new Ui::drum)
{
    ui->setupUi(this);

    QTimer * timer1 = new QTimer(this);
    connect(timer1,SIGNAL(timeout()),this,SLOT(move()));
    timer1->start(7);

    QTimer * timer2 = new QTimer(this);
    connect(timer2,SIGNAL(timeout()),this,SLOT(countdown()));
    timer2->start(1000);

    QTimer * timer3 = new QTimer(this);
    connect(timer3,SIGNAL(timeout()),this,SLOT(getscore()));
    timer3->start(0.1);
}

drum::~drum()
{
    delete ui;
}

void drum::move(){

    ui->label_a->move(QPoint(ui->label_a->x()-2,180));
    ui->label_b->move(QPoint(ui->label_b->x()-2,180));
    ui->label_c->move(QPoint(ui->label_c->x()-2,180));
    ui->label_d->move(QPoint(ui->label_d->x()-2,180));
    ui->label_e->move(QPoint(ui->label_e->x()-2,180));
    ui->label_f->move(QPoint(ui->label_f->x()-2,180));
    ui->label_g->move(QPoint(ui->label_g->x()-2,180));
    ui->label_h->move(QPoint(ui->label_h->x()-2,180));
    ui->label_i->move(QPoint(ui->label_i->x()-2,180));
    ui->label_j->move(QPoint(ui->label_j->x()-2,180));
    ui->label_k->move(QPoint(ui->label_k->x()-2,180));
    ui->label_l->move(QPoint(ui->label_l->x()-2,180));

    if(ui->label_a->x()<200){
        ui->label_a->move(QPoint(ui->label_a->x()+1300,180));
        ui->label_a->show();
    }

    if(ui->label_b->x()<200){
        ui->label_b->move(QPoint(ui->label_b->x()+1300,180));
        ui->label_b->show();
    }
    if(ui->label_c->x()<200){
        ui->label_c->move(QPoint(ui->label_c->x()+1300,180));
        ui->label_c->show();
    }
    if(ui->label_d->x()<200){
        ui->label_d->move(QPoint(ui->label_d->x()+1300,180));
        ui->label_d->show();
    }
    if(ui->label_e->x()<200){
        ui->label_e->move(QPoint(ui->label_e->x()+1300,180));
        ui->label_e->show();
    }
    if(ui->label_f->x()<200){
        ui->label_f->move(QPoint(ui->label_f->x()+1300,180));
        ui->label_f->show();
    }
    if(ui->label_g->x()<200){
        ui->label_g->move(QPoint(ui->label_g->x()+1300,180));
        ui->label_g->show();
    }
    if(ui->label_h->x()<200){
        ui->label_h->move(QPoint(ui->label_h->x()+1300,180));
        ui->label_h->show();
    }
    if(ui->label_i->x()<200){
        ui->label_i->move(QPoint(ui->label_i->x()+1300,180));
        ui->label_i->show();
    }
    if(ui->label_j->x()<200){
        ui->label_j->move(QPoint(ui->label_j->x()+1300,180));
        ui->label_j->show();
    }
    if(ui->label_k->x()<200){
        ui->label_k->move(QPoint(ui->label_k->x()+1300,180));
        ui->label_k->show();
    }
    if(ui->label_l->x()<200){
        ui->label_l->move(QPoint(ui->label_l->x()+1300,180));
        ui->label_l->show();
    }
}


void drum::keyPressEvent(QKeyEvent *event){

    if(event->key()==Qt::Key_J)
        if(ui->label_a->x()>230&&ui->label_a->x()<310){
            ui->label_a->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_J)
        if(ui->label_b->x()>230&&ui->label_b->x()<310){
            ui->label_b->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_J)
        if(ui->label_c->x()>230&&ui->label_c->x()<310){
            ui->label_c->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_F)
        if(ui->label_d->x()>230&&ui->label_d->x()<310){
            ui->label_d->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_F)
        if(ui->label_e->x()>230&&ui->label_e->x()<310){
            ui->label_e->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_J)
        if(ui->label_f->x()>230&&ui->label_f->x()<310){
            ui->label_f->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_F)
        if(ui->label_g->x()>230&&ui->label_g->x()<310){
            ui->label_g->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_J)
        if(ui->label_h->x()>230&&ui->label_h->x()<310){
            ui->label_h->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_F)
        if(ui->label_i->x()>230&&ui->label_i->x()<310){
            ui->label_i->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_J)
        if(ui->label_j->x()>230&&ui->label_j->x()<310){
            ui->label_j->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_J)
        if(ui->label_k->x()>230&&ui->label_k->x()<310){
            ui->label_k->hide();
            score += 2;
        }
    if(event->key()==Qt::Key_F)
        if(ui->label_l->x()>230&&ui->label_l->x()<310){
            ui->label_l->hide();
            score += 2;
        }
}

void drum::countdown(){
    a--;
    ui->seconds->setText(QString::number(a));
    if(a == 0){
        gradeui = new grade();
        gradeui->setWindowTitle("成績発表");
        gradeui->score(score);
        gradeui->show();
        close();
    }
}

void drum::getscore(){
    ui->grade->setText(QString::number(score));
}
