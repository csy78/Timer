#include <QApplication>
#include <QLabel>
#include <QDebug>
#include <QWidget>
#include "qlabelclock.h"




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;

    w.setWindowTitle("别拦我我还能学习队");
    w.resize(400,150);
    w.setStyleSheet("background-color:black");

    QLabel *labelTemperatureData = new QLabel(&w);
    labelTemperatureData->setText("36.5");
    labelTemperatureData->setStyleSheet("color:pink;font-family:Microsoft YaHei;font-size:60px");
    labelTemperatureData->setGeometry(50,0,150,150);

    QLabel *labelTemperatureText = new QLabel(&w);
    labelTemperatureText->setText("T-");
    labelTemperatureText->setStyleSheet("color:pink;font-family:Microsoft YaHei;font-size:25px");
    labelTemperatureText->setGeometry(0,50,50,50);

    QLabel *labelTemperatureText2 = new QLabel(&w);
    labelTemperatureText2->setText("℃");
    labelTemperatureText2->setStyleSheet("color:pink;font-family:Microsoft YaHei;font-size:25px");
    labelTemperatureText2->setGeometry(180,10,50,50);

    QLabel *labelTemperatureText3 = new QLabel(&w);
    labelTemperatureText3->setText("1170500310-陈思雨");
    labelTemperatureText3->setStyleSheet("color:pink;font-family:Microsoft YaHei;font-size:15px");
    labelTemperatureText3->setGeometry(200,80,150,60);
//   qDebug() <<"data:"<< QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss dddd");
//   QLabel * time = new QLabel(&w);
//   time->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss dddd"));
//   time->setGeometry(0,150-30,300,30);
//   time->setStyleSheet("color:white");
    QLabelClock * labelClock = new QLabelClock(&w);
    labelClock->setGeometry(0, 150-30, 300,30);
    labelClock->setStyleSheet("color:white");


    w.show();

    return a.exec();
}
