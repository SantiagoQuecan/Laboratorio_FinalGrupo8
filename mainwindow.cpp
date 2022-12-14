#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <QString>
#include <ostream>
#include <QDebug>
#include <string.h>
#include <sstream>
#include <QCheckBox>



using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Act_MOT_clicked()
{
    QStringList Datos, datos1, datos2, datos3, datos4, datos5, datos6;
    QString velo,frec,Volt,Temp,tim,velocidad, frecuencia, temperatura, voltaje, tiempo;
    int v,f,vo,temp,ti;
    QFile file("/home/alse/Documents/Proyecto-Final/Motor3.txt");

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "error opening file: " << file.error();
        return;
    }

    QTextStream instream(&file);
    QString str = instream.readLine();


    Datos = str.split(";");


    velo =Datos[0];
    frec =Datos[1];
    Volt =Datos[2];
    Temp =Datos[3];
    tim =Datos[4];


    datos1=velo.split(":");
    datos2=frec.split(":");
    datos3=Volt.split(":");
    datos4=Temp.split(":");
    datos5=tim.split(":");

    datos6 = datos5[1].split("}");

    velocidad = datos1[1];
    frecuencia = datos2[1];
    voltaje= datos3[1];
    temperatura = datos4[1];
    tiempo = datos6[0];


    v=velocidad.toInt();
    f=frecuencia.toInt();
    vo=voltaje.toInt();
    temp=temperatura.toInt();
    ti=tiempo.toInt();

    ui->Velocidad_Act->setText(velocidad);
    ui->FrecuenciaAct->setText(frecuencia);
    ui->VoltajeAct->setText(voltaje);
    ui->TemperaturaAct->setText(temperatura);
    ui->TimeAct->setText(tiempo);



    if(v>1710 && v<1890)
    {
        ui->IndV->setText("Optimo");
    }
    else
    {
        ui->IndV->setText("Peligro");
    }
    if(f>57 && f<63)
    {
        ui->IndF->setText("Optimo");
    }
    else
    {
        ui->IndF->setText("Peligro");
    }
    if(vo>198 && vo<242)
    {
        ui->IndVo->setText("Optimo");
    }
    else
    {
        ui->IndVo->setText("Peligro");
    }
    if(temp>57 && temp<63)
    {
        ui->IndT->setText("Optimo");
    }
    else
    {
        ui->IndT->setText("Peligro");
    }
    file.close();


    return ;

}

void MainWindow::on_Act_REF_TOL_clicked()
{
    ui->VelocidadReferencia->setText("1800");
    ui->FrecuenciaReferencia->setText("60");
    ui->VoltajeReferencia->setText("220");
    ui->TemperaturaReferencia->setText("60");
    ui->ToleranciaVelocidad->setText("5");
    ui->ToleranciaFrecuencia->setText("5");
    ui->ToleranciaVoltaje->setText("10");
    ui->ToleranciaTemperatura->setText("5");
    ui->VelMin->setText("1710");
    ui->FrecMin->setText("57");
    ui->VolMin->setText("198");
    ui->TempMin->setText("57");
    ui->VelMax->setText("1890");
    ui->FrecMax->setText("63");
    ui->VolMax->setText("242");
    ui->TempMax->setText("63");



}

void MainWindow::on_VELOCIDAD_valueChanged(int value)
{

}

void MainWindow::on_FRECUENCIA_valueChanged(int value)
{

}

void MainWindow::on_VOLTAJE_valueChanged(int value)
{

}

void MainWindow::on_TEMPERATURA_valueChanged(int value)
{

}

void MainWindow::on_T_OPERACION_valueChanged(int value)
{

}

void MainWindow::on_VelocidadReferencia_copyAvailable(bool b)
{

}


void MainWindow::on_FrecuenciaReferencia_copyAvailable(bool b)
{

}

void MainWindow::on_VoltajeReferencia_copyAvailable(bool b)
{

}

void MainWindow::on_TemperaturaReferencia_copyAvailable(bool b)
{

}

void MainWindow::on_ToleranciaVelocidad_copyAvailable(bool b)
{

}

void MainWindow::on_ToleranciaFrecuencia_copyAvailable(bool b)
{

}

void MainWindow::on_ToleranciaVoltaje_copyAvailable(bool b)
{

}

void MainWindow::on_ToleranciaTemperatura_copyAvailable(bool b)
{

}

void MainWindow::on_VelMin_copyAvailable(bool b)
{

}

void MainWindow::on_FrecMin_copyAvailable(bool b)
{

}

void MainWindow::on_VolMin_copyAvailable(bool b)
{

}

void MainWindow::on_TempMin_copyAvailable(bool b)
{

}

void MainWindow::on_VelMax_copyAvailable(bool b)
{

}

void MainWindow::on_FrecMax_copyAvailable(bool b)
{

}

void MainWindow::on_VolMax_copyAvailable(bool b)
{

}

void MainWindow::on_TempMax_copyAvailable(bool b)
{

}




























void MainWindow::on_TOL_TEMP_copyAvailable(bool b)
{

}

void MainWindow::on_TOL_VOL_copyAvailable(bool b)
{

}

void MainWindow::on_TOL_FREC_copyAvailable(bool b)
{

}

void MainWindow::on_TOL_VEL_copyAvailable(bool b)
{

}

void MainWindow::on_REF_TEMP_copyAvailable(bool b)
{

}

void MainWindow::on_REF_VOL_copyAvailable(bool b)
{

}

void MainWindow::on_REF_FREC_copyAvailable(bool b)
{

}

void MainWindow::on_REF_VEL_copyAvailable(bool b)
{

}

void MainWindow::on_REGISTRO_VAL_T_copyAvailable(bool b)
{

}

void MainWindow::on_CARNE_copyAvailable(bool b)
{

}

void MainWindow::on_ACTUALIZAR_MOTOR_clicked()
{

}

void MainWindow::on_ACTUALIZAR_REF_TOL_clicked()
{

}

void MainWindow::on_Velocidad_Act_copyAvailable(bool b)
{

}

void MainWindow::on_FrecuenciaAct_copyAvailable(bool b)
{

}

void MainWindow::on_VoltajeAct_copyAvailable(bool b)
{

}

void MainWindow::on_TemperaturaAct_copyAvailable(bool b)
{

}

void MainWindow::on_TimeAct_copyAvailable(bool b)
{

}

void MainWindow::on_IndV_copyAvailable(bool b)
{

}

void MainWindow::on_IndF_copyAvailable(bool b)
{

}

void MainWindow::on_IndVo_copyAvailable(bool b)
{

}

void MainWindow::on_IndT_copyAvailable(bool b)
{

}
