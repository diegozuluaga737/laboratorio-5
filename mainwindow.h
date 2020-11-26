#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRectF>
#include <QDesktopWidget>
#include <QDebug>
#include <QGraphicsScene>
#include <QKeyEvent>//recibir teclas
#include "personajes.h"
#include "laberinto.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;

    float x,y;
    Personajes *pacman;
    Personajes *redGhost;

    void keyPressEvent(QKeyEvent *evento);

    //laberinto

    laberinto *pared1;
    laberinto *pared2;
    laberinto *pared3;
    laberinto *pared4;
    laberinto *pared5;
    laberinto *pared6;
    laberinto *pared7;
    laberinto *pared8;
    laberinto *pared9;
    laberinto *pared10;
    laberinto *pared11;
    laberinto *pared12;
    laberinto *pared13;
    laberinto *pared14;
    laberinto *pared15;
    laberinto *pared16;
    laberinto *pared17;
    laberinto *pared18;
    laberinto *pared19;
    laberinto *pared20;
    laberinto *pared21;
    laberinto *pared22;
    laberinto *pared23;
    laberinto *pared24;
    laberinto *pared25;
    laberinto *pared26;
    laberinto *pared27;
    laberinto *pared28;
    laberinto *pared29;
    laberinto *pared30;
    laberinto *pared31;
    laberinto *pared32;
    laberinto *pared33;

};
#endif // MAINWINDOW_H
