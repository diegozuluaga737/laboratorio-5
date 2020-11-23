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
    scene = scene = new QGraphicsScene(Desktop.x(),Desktop.y(),1000-10,900-10);
    ui->graphicsView->setScene(scene);

    //persona pacman
    pac_man = new Personajes();
    scene->addItem(pac_man);
    pac_man->setPos(450,500);

}

MainWindow::~MainWindow()
{
    delete ui;
}

