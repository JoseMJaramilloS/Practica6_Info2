#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QGraphicsScene>
#include <iostream>
#include <QList>
#include <fstream>
#include <QTimer>
#include "cuerpo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void agregarCuerpo(double posx_,double posy_, double velx_, double vely_, double masa_, double radio_);

private slots:
    void actualizarMovimiento();
    void on_btnPlay_clicked();
    void on_btnStop_clicked();
    void on_horizontalSlider_valueChanged(int value);




    void on_btnAgregar_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QList<cuerpo*>cuerpos;
    QList<cuerpo*>::Iterator iter_i;
    QList<cuerpo*>::Iterator iter_j;
    QTimer *timer;
    int velSimu;

};
#endif // MAINWINDOW_H
