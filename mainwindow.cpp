#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QRect Desktop = QApplication::desktop()->screenGeometry();
    x = Desktop.x();
    y = Desktop.y();

    //escena
    scene = scene = new QGraphicsScene(Desktop.x(),Desktop.y(),1024,688);
    scene->setBackgroundBrush(QPixmap(":/imagenes/mapa pacman.png"));
    ui->graphicsView->setScene(scene);

    //persona pacman
    pac_man = new Personajes();
    scene->addItem(pac_man);
    pac_man->setPos(pac_man->getPosx(),pac_man->getPosy());


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(evento->key() == Qt::Key_A){
        pac_man->Left();
    }
    else if(evento->key() == Qt::Key_D){
        pac_man->Right();
    }
    else if(evento->key() == Qt::Key_W){
        pac_man->Up();
    }
    else if(evento->key() == Qt::Key_S){
        pac_man->Down();
    }
}

