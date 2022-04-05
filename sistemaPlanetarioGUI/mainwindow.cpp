#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene= new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    scene->setSceneRect(0,0,800,800);

    timer= new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizarMovimiento()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::agregarCuerpo(double posx_,double posy_, double velx_, double vely_, double masa_, double radio_)
{
    this->cuerpos.push_back(new cuerpo(posx_,posy_, velx_, vely_, masa_, radio_));
    scene->addItem(cuerpos.back());

}

void MainWindow::menuDesplegable_seleccionar()
{
    QString name;
    name= ui->comboBox->currentText();
    cout<<name.toStdString()<<endl;
    if (name == "Sistema 1") {
        on_btnBorrarTodos_clicked();
        agregarCuerpo(0,-7000,2,0,70,120);
        agregarCuerpo(0,0,0,0,70000,300);
        agregarCuerpo(4000,5000,-1.6,1.2,25,100);

    }
    else if (name == "Sistema 2") {
        on_btnBorrarTodos_clicked();
        agregarCuerpo(0,0,0,0,50000,200);
        agregarCuerpo(-5000,0,0,-2,70,70);
        agregarCuerpo(5000,0,0,2,70,70);
        agregarCuerpo(0,-5000,2,0,70,70);
        agregarCuerpo(0,5000,-2,0,70,70);
    }
    else if (name == "Sistema 3") {
        on_btnBorrarTodos_clicked();
        agregarCuerpo(0,0,0,0,100000,300);
        agregarCuerpo(0,8000,3.535,0,1000,200);
        agregarCuerpo(0,5000,4.47,0,1000,120);
    }


}

void MainWindow::actualizarMovimiento()
{
    for (iter_i=cuerpos.begin();iter_i!=cuerpos.end();iter_i++) {
        (*iter_i)->setAx(0); // La aceleracion deber ser reemplazada en cada iteracion (no se acumula infinitamente)
        (*iter_i)->setAy(0);
        for (iter_j=cuerpos.begin();iter_j!=cuerpos.end();iter_j++) {
            if (iter_i != iter_j) {
                (*iter_i)->calcularAceleracion((*iter_j)); // Actualizo aceleracion
            }
        }
        (*iter_i)->calcularVelocidad(); // Actualizo velocidad
        (*iter_i)->calcularPosicion(); // Actualizo posicion
    }    
}

void MainWindow::on_btnPlay_clicked()
{
    //timer->start(5);
    timer->start(velSimu);
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    velSimu=5-value;
    timer->start(velSimu);
}


void MainWindow::on_btnStop_clicked()
{
    timer->stop();
}

void MainWindow::on_btnAgregar_clicked()
{
    double posx_,posy_, velx_, vely_, masa_, radio_;
    posx_= ui->linePosx->text().toDouble();
    posy_= ui->linePosy->text().toDouble();
    velx_= ui->lineVelx->text().toDouble();
    vely_= ui->lineVely->text().toDouble();
    masa_= ui->lineMasa->text().toDouble();
    radio_= ui->lineRadio->text().toDouble();
    agregarCuerpo(posx_,posy_, velx_, vely_, masa_, radio_);
}

void MainWindow::on_btnBorrarTodos_clicked()
{
    for (iter_i=cuerpos.begin();iter_i!=cuerpos.end();iter_i++) {
        scene->removeItem(*iter_i);
        cuerpos.erase(iter_i);
    }
}

void MainWindow::on_btnSistema_clicked()
{
    cout<<"click"<<endl;
    menuDesplegable_seleccionar();
}

void MainWindow::on_btnBorrar_clicked()
{
    scene->removeItem(cuerpos.back());
    cuerpos.pop_back();
}
