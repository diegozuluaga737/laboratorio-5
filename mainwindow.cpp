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

    //laberinto

    pared1=new laberinto(91,92,-42,-42);
    pared2=new laberinto(134,92,-175,-42);
    pared3=new laberinto(46,314,-351,0);
    pared4=new laberinto(223,46,-262,-176);
    pared5=new laberinto(134,92,-439,-42);
    pared6=new laberinto(91,92,-615,-42);
    pared7=new laberinto(90,47,-42,-176);
    pared8=new laberinto(90,47,-615,-176);
    pared9=new laberinto(46,223,-174,-176);
    pared10=new laberinto(88,47,-220,-267);
    pared11=new laberinto(92,47,-440,-267);
    pared12=new laberinto(46,223,-527,-176);
    pared13=new laberinto(224,136,-262,-355);
    pared14=new laberinto(134,312,0,-267);
    pared15=new laberinto(134,312,-616,-267);
    pared16=new laberinto(46,138,-174,-441);
    pared17=new laberinto(46,138,-527,-441);
    pared18=new laberinto(223,46,-262,-533);
    pared19=new laberinto(46,93,-351,-571);
    pared20=new laberinto(134,46,-175,-619);
    pared21=new laberinto(134,46,-440,-619);
    pared22=new laberinto(91,46,-42,-619);
    pared23=new laberinto(46,93,-87,-661);
    pared24=new laberinto(46,93,-616,-661);
    pared25=new laberinto(91,46,-616,-619);
    pared26=new laberinto(46,46,0,-710);
    pared27=new laberinto(46,46,-704,-710);
    pared28=new laberinto(223,46,-266,-710);

    pared29=new laberinto(46,93,-351,-756);
    pared30=new laberinto(267,46,-42,-752);
    pared31=new laberinto(49,92,-175,-710);
    pared32=new laberinto(267,46,(-351-88),-752);
    pared33=new laberinto(49,92,-527,-710);

    //gregar laberinto

    scene->addItem(pared1);
    scene->addItem(pared2);
    scene->addItem(pared3);
    scene->addItem(pared4);
    scene->addItem(pared5);
    scene->addItem(pared6);
    scene->addItem(pared7);
    scene->addItem(pared8);
    scene->addItem(pared9);
    scene->addItem(pared10);
    scene->addItem(pared11);
    scene->addItem(pared12);
    scene->addItem(pared13);
    scene->addItem(pared14);
    scene->addItem(pared15);
    scene->addItem(pared16);
    scene->addItem(pared17);
    scene->addItem(pared18);
    scene->addItem(pared19);
    scene->addItem(pared20);
    scene->addItem(pared21);
    scene->addItem(pared22);
    scene->addItem(pared23);
    scene->addItem(pared24);
    scene->addItem(pared25);
    scene->addItem(pared26);
    scene->addItem(pared27);
    scene->addItem(pared28);
    scene->addItem(pared29);
    scene->addItem(pared30);
    scene->addItem(pared31);
    scene->addItem(pared32);
    scene->addItem(pared33);














}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_A && pacman->x()>=20){
        pacman->Left();
        if (pacman->collidesWithItem(pared1) || pacman->collidesWithItem(pared2) || pacman->collidesWithItem(pared3) || pacman->collidesWithItem(pared4)|| pacman->collidesWithItem(pared5)|| pacman->collidesWithItem(pared6)|| pacman->collidesWithItem(pared7)|| pacman->collidesWithItem(pared8)|| pacman->collidesWithItem(pared9)|| pacman->collidesWithItem(pared10)|| pacman->collidesWithItem(pared11)
           || pacman->collidesWithItem(pared12)|| pacman->collidesWithItem(pared13)|| pacman->collidesWithItem(pared14)|| pacman->collidesWithItem(pared15)|| pacman->collidesWithItem(pared16)|| pacman->collidesWithItem(pared17)|| pacman->collidesWithItem(pared18)|| pacman->collidesWithItem(pared19)|| pacman->collidesWithItem(pared20)|| pacman->collidesWithItem(pared21)|| pacman->collidesWithItem(pared22)
           || pacman->collidesWithItem(pared23)|| pacman->collidesWithItem(pared24)|| pacman->collidesWithItem(pared25)|| pacman->collidesWithItem(pared26)|| pacman->collidesWithItem(pared27)|| pacman->collidesWithItem(pared28)|| pacman->collidesWithItem(pared29)|| pacman->collidesWithItem(pared30)|| pacman->collidesWithItem(pared31)|| pacman->collidesWithItem(pared32)|| pacman->collidesWithItem(pared33)) {

            pacman->Right();
        }
    }
    else if(evento->key() == Qt::Key_D && pacman->x()<=730){
        pacman->Right();
        if (pacman->collidesWithItem(pared1) || pacman->collidesWithItem(pared2) || pacman->collidesWithItem(pared3) || pacman->collidesWithItem(pared4)|| pacman->collidesWithItem(pared5)|| pacman->collidesWithItem(pared6)|| pacman->collidesWithItem(pared7)|| pacman->collidesWithItem(pared8)|| pacman->collidesWithItem(pared9)|| pacman->collidesWithItem(pared10)|| pacman->collidesWithItem(pared11)
           || pacman->collidesWithItem(pared12)|| pacman->collidesWithItem(pared13)|| pacman->collidesWithItem(pared14)|| pacman->collidesWithItem(pared15)|| pacman->collidesWithItem(pared16)|| pacman->collidesWithItem(pared17)|| pacman->collidesWithItem(pared18)|| pacman->collidesWithItem(pared19)|| pacman->collidesWithItem(pared20)|| pacman->collidesWithItem(pared21)|| pacman->collidesWithItem(pared22)
           || pacman->collidesWithItem(pared23)|| pacman->collidesWithItem(pared24)|| pacman->collidesWithItem(pared25)|| pacman->collidesWithItem(pared26)|| pacman->collidesWithItem(pared27)|| pacman->collidesWithItem(pared28)|| pacman->collidesWithItem(pared29)|| pacman->collidesWithItem(pared30)|| pacman->collidesWithItem(pared31)|| pacman->collidesWithItem(pared32)|| pacman->collidesWithItem(pared33)) {

            pacman->Left();
        }
    }
    else if(evento->key() == Qt::Key_W && pacman->y()>=20){
        pacman->Up();
        if (pacman->collidesWithItem(pared1) || pacman->collidesWithItem(pared2) || pacman->collidesWithItem(pared3) || pacman->collidesWithItem(pared4)|| pacman->collidesWithItem(pared5)|| pacman->collidesWithItem(pared6)|| pacman->collidesWithItem(pared7)|| pacman->collidesWithItem(pared8)|| pacman->collidesWithItem(pared9)|| pacman->collidesWithItem(pared10)|| pacman->collidesWithItem(pared11)
           || pacman->collidesWithItem(pared12)|| pacman->collidesWithItem(pared13)|| pacman->collidesWithItem(pared14)|| pacman->collidesWithItem(pared15)|| pacman->collidesWithItem(pared16)|| pacman->collidesWithItem(pared17)|| pacman->collidesWithItem(pared18)|| pacman->collidesWithItem(pared19)|| pacman->collidesWithItem(pared20)|| pacman->collidesWithItem(pared21)|| pacman->collidesWithItem(pared22)
           || pacman->collidesWithItem(pared23)|| pacman->collidesWithItem(pared24)|| pacman->collidesWithItem(pared25)|| pacman->collidesWithItem(pared26)|| pacman->collidesWithItem(pared27)|| pacman->collidesWithItem(pared28)|| pacman->collidesWithItem(pared29)|| pacman->collidesWithItem(pared30)|| pacman->collidesWithItem(pared31)|| pacman->collidesWithItem(pared32)|| pacman->collidesWithItem(pared33)) {

            pacman->Down();
        }
    }
    else if(evento->key() == Qt::Key_S && pacman->y()<=860){
        pacman->Down();
        if (pacman->collidesWithItem(pared1) || pacman->collidesWithItem(pared2) || pacman->collidesWithItem(pared3) || pacman->collidesWithItem(pared4)|| pacman->collidesWithItem(pared5)|| pacman->collidesWithItem(pared6)|| pacman->collidesWithItem(pared7)|| pacman->collidesWithItem(pared8)|| pacman->collidesWithItem(pared9)|| pacman->collidesWithItem(pared10)|| pacman->collidesWithItem(pared11)
           || pacman->collidesWithItem(pared12)|| pacman->collidesWithItem(pared13)|| pacman->collidesWithItem(pared14)|| pacman->collidesWithItem(pared15)|| pacman->collidesWithItem(pared16)|| pacman->collidesWithItem(pared17)|| pacman->collidesWithItem(pared18)|| pacman->collidesWithItem(pared19)|| pacman->collidesWithItem(pared20)|| pacman->collidesWithItem(pared21)|| pacman->collidesWithItem(pared22)
           || pacman->collidesWithItem(pared23)|| pacman->collidesWithItem(pared24)|| pacman->collidesWithItem(pared25)|| pacman->collidesWithItem(pared26)|| pacman->collidesWithItem(pared27)|| pacman->collidesWithItem(pared28)|| pacman->collidesWithItem(pared29)|| pacman->collidesWithItem(pared30)|| pacman->collidesWithItem(pared31)|| pacman->collidesWithItem(pared32)|| pacman->collidesWithItem(pared33)) {

            pacman->Up();
        }
    }
}

