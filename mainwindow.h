#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRectF>
#include <QDesktopWidget>
#include <QDebug>
#include <QGraphicsScene>
#include "personajes.h"

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
    Personajes *pac_man;
};
#endif // MAINWINDOW_H
