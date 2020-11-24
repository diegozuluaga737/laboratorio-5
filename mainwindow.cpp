#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //escena
    scene = new QGraphicsScene(0,0,748,880);
    scene->setBackgroundBrush(QPixmap(":/imagenes/mapa3.jpg"));
    ui->graphicsView->setScene(scene);

    //persona pacman
    pacman = new Personajes();
    scene->addItem(pacman);
    pacman->setPos(pacman->getPosx(),pacman->getPosy());
   //fantasmas
    redGhost = new Personajes(":/imagenes/red-Ghosts_opt.png",24,25,300,325);
    scene->addItem(redGhost);
    redGhost->setPos(redGhost->getPosx(),redGhost->getPosy());


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_A && pacman->x()>=20){
        pacman->Left();
    }
    else if(evento->key() == Qt::Key_D && pacman->x()<=730){
        pacman->Right();
    }
    else if(evento->key() == Qt::Key_W && pacman->y()>=20){
        pacman->Up();
    }
    else if(evento->key() == Qt::Key_S && pacman->y()<=860){
        pacman->Down();
    }
}

