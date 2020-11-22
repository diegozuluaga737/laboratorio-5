#ifndef PERSONAJES_H
#define PERSONAJES_H

#include <QObject>

class Personajes : public QObject
{
    Q_OBJECT

    int posx,posy;
    int radio;
public:
    explicit Personajes(QObject *parent = nullptr);

signals:

};

#endif // PERSONAJES_H
