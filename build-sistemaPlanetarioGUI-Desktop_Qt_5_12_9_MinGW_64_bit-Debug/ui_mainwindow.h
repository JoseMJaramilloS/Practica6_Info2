/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *btnPlay;
    QPushButton *btnStop;
    QSlider *horizontalSlider;
    QLabel *label;
    QLineEdit *linePosx;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *linePosy;
    QLabel *label_4;
    QLineEdit *lineVely;
    QLineEdit *lineVelx;
    QLabel *label_5;
    QLineEdit *lineRadio;
    QLineEdit *lineMasa;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *btnAgregar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1150, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(15, 11, 800, 800));
        btnPlay = new QPushButton(centralwidget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        btnPlay->setGeometry(QRect(840, 650, 131, 71));
        QFont font;
        font.setPointSize(17);
        btnPlay->setFont(font);
        btnStop = new QPushButton(centralwidget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(990, 650, 131, 71));
        btnStop->setFont(font);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(840, 600, 261, 21));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(4);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(840, 560, 201, 31));
        QFont font1;
        font1.setPointSize(11);
        label->setFont(font1);
        linePosx = new QLineEdit(centralwidget);
        linePosx->setObjectName(QString::fromUtf8("linePosx"));
        linePosx->setGeometry(QRect(840, 90, 114, 23));
        linePosx->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(840, 60, 81, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1000, 60, 81, 21));
        label_3->setFont(font1);
        linePosy = new QLineEdit(centralwidget);
        linePosy->setObjectName(QString::fromUtf8("linePosy"));
        linePosy->setGeometry(QRect(1000, 90, 114, 23));
        linePosy->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1000, 160, 81, 21));
        label_4->setFont(font1);
        lineVely = new QLineEdit(centralwidget);
        lineVely->setObjectName(QString::fromUtf8("lineVely"));
        lineVely->setGeometry(QRect(1000, 190, 114, 23));
        lineVely->setFont(font1);
        lineVelx = new QLineEdit(centralwidget);
        lineVelx->setObjectName(QString::fromUtf8("lineVelx"));
        lineVelx->setGeometry(QRect(840, 190, 114, 23));
        lineVelx->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(840, 160, 81, 21));
        label_5->setFont(font1);
        lineRadio = new QLineEdit(centralwidget);
        lineRadio->setObjectName(QString::fromUtf8("lineRadio"));
        lineRadio->setGeometry(QRect(1000, 290, 114, 23));
        lineRadio->setFont(font1);
        lineMasa = new QLineEdit(centralwidget);
        lineMasa->setObjectName(QString::fromUtf8("lineMasa"));
        lineMasa->setGeometry(QRect(840, 290, 114, 23));
        lineMasa->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(840, 260, 81, 21));
        label_6->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1000, 260, 81, 21));
        label_7->setFont(font1);
        btnAgregar = new QPushButton(centralwidget);
        btnAgregar->setObjectName(QString::fromUtf8("btnAgregar"));
        btnAgregar->setGeometry(QRect(910, 370, 131, 71));
        QFont font2;
        font2.setPointSize(14);
        btnAgregar->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1150, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btnPlay->setText(QApplication::translate("MainWindow", "Play", nullptr));
        btnStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        label->setText(QApplication::translate("MainWindow", "Velocidad de simulacion", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Posicion x", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Posicion y", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Velocidad y", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Velocidad x", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Masa", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Radio", nullptr));
        btnAgregar->setText(QApplication::translate("MainWindow", "Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
