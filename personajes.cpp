#include "personajes.h"

Personajes::Personajes(QObject *parent) : QObject(parent)
{
    timer = new QTimer();
    filas = 0;
    columnas = 0;
    pixmap = new QPixmap(":/imagenes/PACMAN.png");

    //dimensiones de la imagen
     ancho = 100;
     alto = 100;
     timer->start(120);
     connect(timer,&QTimer::timeout,this,&Personajes::Actualizacion);

}

QRectF Personajes::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Personajes::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*pixmap,columnas,0,ancho,alto);
}

void Personajes::Actualizacion()
{
    columnas += 100;
    if(columnas >= 400){
        columnas = 0;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);
}
