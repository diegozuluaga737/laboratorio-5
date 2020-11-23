#ifndef PERSONAJES_H
#define PERSONAJES_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>

class Personajes : public QObject, public QGraphicsItem
{
    Q_OBJECT

    int posx,posy;
    float ancho, alto;
    float filas, columnas;
public:
    explicit Personajes(QObject *parent = nullptr);

    QTimer *timer;
    QPixmap *pixmap;

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);

signals:
public slots:
    void Actualizacion();

};

#endif // PERSONAJES_H
