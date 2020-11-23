#include "personajes.h"

int Personajes::getPosx() const
{
    return posx;
}

void Personajes::setPosx(int value)
{
    posx = value;
}

int Personajes::getPosy() const
{
    return posy;
}

void Personajes::setPosy(int value)
{
    posy = value;
}

Personajes::Personajes(QObject *parent) : QObject(parent)
{
    timer = new QTimer();
    filas = 0;
    columnas = 0;
    pixmap = new QPixmap(":/imagenes/PACMAN.png");

    posy = 400;
    posx = 400;
    velocidad = 15;

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

void Personajes::Up()
{
    posy -= velocidad;
    setPos(posx,posy);
}

void Personajes::Down()
{
    posy += velocidad;
    setPos(posx,posy);
}

void Personajes::Left()
{
    posx -= velocidad;
    setPos(posx,posy);
}

void Personajes::Right()
{
    posx += velocidad;
    setPos(posx,posy);
}

void Personajes::Actualizacion()
{
    columnas += 100;
    if(columnas >= 400){
        columnas = 0;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);
}
