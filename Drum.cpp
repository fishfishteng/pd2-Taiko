#include "Drum.h"
#include "MyRect.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <QKeyEvent>

#include <QDebug>
Drum::Drum(): QObject(), QGraphicsPixmapItem(){

    //set position
    setPos(800,150);

    //set Pixmap
    setPixmap(QPixmap(":/img/red.png"));

    //connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}




void Drum::move(){
  //move drum left
  setPos(x()-10,y());

  if(pos().x() < 75 && pos().x() > 25 /*&& event->key() == Qt::Key_J*/){
      scene()->removeItem(this);
      delete this;
  }
  else if(pos().x() < 0){
    scene()->removeItem(this);
    delete this;
  }
}
