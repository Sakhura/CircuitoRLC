#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDoubleValidator>
#include <QMessageBox>
#include <QtMath>

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
    void on_pushButton_calcular_clicked();
    void on_pushButton_limpiar_clicked();
    void on_pushButton_salir_clicked();

private:
    Ui::MainWindow *ui;
    QDoubleValidator *validator;

    // Funciones auxiliares
    bool validarEntradas();
    void calcularParametros();
    void limpiarCampos();
    QString determinarTipo(double X);
};

#endif // MAINWINDOW_H
