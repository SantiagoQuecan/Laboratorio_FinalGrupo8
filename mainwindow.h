#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_ACTUALIZAR_REF_TOL_clicked();

    void on_ACTUALIZAR_MOTOR_clicked();

    void on_VELOCIDAD_valueChanged(int value);

    void on_FRECUENCIA_valueChanged(int value);

    void on_VOLTAJE_valueChanged(int value);

    void on_TEMPERATURA_valueChanged(int value);

    void on_T_OPERACION_valueChanged(int value);

    void on_CARNE_copyAvailable(bool b);

    void on_REGISTRO_VAL_T_copyAvailable(bool b);

    void on_REF_VEL_copyAvailable(bool b);

    void on_REF_FREC_copyAvailable(bool b);

    void on_REF_VOL_copyAvailable(bool b);

    void on_REF_TEMP_copyAvailable(bool b);

    void on_TOL_VEL_copyAvailable(bool b);

    void on_TOL_FREC_copyAvailable(bool b);

    void on_TOL_VOL_copyAvailable(bool b);

    void on_TOL_TEMP_copyAvailable(bool b);

    void on_Act_REF_TOL_clicked();

    void on_VelocidadReferencia_copyAvailable(bool b);

    void on_FrecuenciaReferencia_copyAvailable(bool b);

    void on_VoltajeReferencia_copyAvailable(bool b);

    void on_TemperaturaReferencia_copyAvailable(bool b);

    void on_ToleranciaVelocidad_copyAvailable(bool b);

    void on_ToleranciaFrecuencia_copyAvailable(bool b);

    void on_ToleranciaVoltaje_copyAvailable(bool b);

    void on_ToleranciaTemperatura_copyAvailable(bool b);

    void on_VelMin_copyAvailable(bool b);

    void on_FrecMin_copyAvailable(bool b);

    void on_VolMin_copyAvailable(bool b);

    void on_TempMin_copyAvailable(bool b);

    void on_VelMax_copyAvailable(bool b);

    void on_FrecMax_copyAvailable(bool b);

    void on_VolMax_copyAvailable(bool b);

    void on_TempMax_copyAvailable(bool b);

    void on_Act_MOT_clicked();

    void on_Velocidad_Act_copyAvailable(bool b);

    void on_FrecuenciaAct_copyAvailable(bool b);

    void on_VoltajeAct_copyAvailable(bool b);

    void on_TemperaturaAct_copyAvailable(bool b);

    void on_TimeAct_copyAvailable(bool b);

    void on_IndV_copyAvailable(bool b);

    void on_IndF_copyAvailable(bool b);

    void on_IndVo_copyAvailable(bool b);

    void on_IndT_copyAvailable(bool b);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
