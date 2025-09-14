#include "mainwindow.h"
#include "ui_mainwindow.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Configurar validador para números decimales positivos
    validator = new QDoubleValidator(0.001, 999999.999, 3, this);
    validator->setNotation(QDoubleValidator::StandardNotation);

    // Aplicar validadores a campos de entrada
    ui->lineEdit_Vrms->setValidator(validator);
    ui->lineEdit_freq->setValidator(validator);
    ui->lineEdit_R->setValidator(validator);
    ui->lineEdit_L->setValidator(validator);
    ui->lineEdit_C->setValidator(validator);

    // El campo de fase puede ser negativo
    QDoubleValidator *faseValidator = new QDoubleValidator(-180.0, 180.0, 2, this);
    ui->lineEdit_fase->setValidator(faseValidator);

    // Configurar valores por defecto
    ui->lineEdit_Vrms->setText("220.0");
    ui->lineEdit_freq->setText("60.0");
    ui->lineEdit_fase->setText("0.0");
    ui->lineEdit_R->setText("100.0");
    ui->lineEdit_L->setText("159.15"); // Para fr ≈ 60 Hz
    ui->lineEdit_C->setText("44.21");  // Para fr ≈ 60 Hz

    // Configurar campos de resultados como solo lectura con colores por categoría

    // REACTANCIAS - Verde claro
    ui->lineEdit_XL->setReadOnly(true);
    ui->lineEdit_XL->setStyleSheet("background-color: #e8f5e8; border: 2px solid #4caf50; color: #2e7d32; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_XL->setText("0.00");

    ui->lineEdit_XC->setReadOnly(true);
    ui->lineEdit_XC->setStyleSheet("background-color: #e8f5e8; border: 2px solid #4caf50; color: #2e7d32; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_XC->setText("0.00");

    ui->lineEdit_X->setReadOnly(true);
    ui->lineEdit_X->setStyleSheet("background-color: #e8f5e8; border: 2px solid #4caf50; color: #2e7d32; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_X->setText("0.00");

    // IMPEDANCIA Y CORRIENTE - Azul claro
    ui->lineEdit_Z->setReadOnly(true);
    ui->lineEdit_Z->setStyleSheet("background-color: #e3f2fd; border: 2px solid #2196f3; color: #0d47a1; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_Z->setText("0.00");

    ui->lineEdit_phi->setReadOnly(true);
    ui->lineEdit_phi->setStyleSheet("background-color: #e3f2fd; border: 2px solid #2196f3; color: #0d47a1; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_phi->setText("0.00");

    ui->lineEdit_I->setReadOnly(true);
    ui->lineEdit_I->setStyleSheet("background-color: #e3f2fd; border: 2px solid #2196f3; color: #0d47a1; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_I->setText("0.0000");

    ui->lineEdit_tipo->setReadOnly(true);
    ui->lineEdit_tipo->setStyleSheet("background-color: #e3f2fd; border: 2px solid #2196f3; color: #0d47a1; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_tipo->setText("---");

    // VOLTAJES - Amarillo claro
    ui->lineEdit_VR->setReadOnly(true);
    ui->lineEdit_VR->setStyleSheet("background-color: #fff8e1; border: 2px solid #ff9800; color: #e65100; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_VR->setText("0.00");

    ui->lineEdit_VL->setReadOnly(true);
    ui->lineEdit_VL->setStyleSheet("background-color: #fff8e1; border: 2px solid #ff9800; color: #e65100; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_VL->setText("0.00");

    ui->lineEdit_VC->setReadOnly(true);
    ui->lineEdit_VC->setStyleSheet("background-color: #fff8e1; border: 2px solid #ff9800; color: #e65100; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_VC->setText("0.00");

    // POTENCIAS - Rojo claro
    ui->lineEdit_P->setReadOnly(true);
    ui->lineEdit_P->setStyleSheet("background-color: #ffebee; border: 2px solid #f44336; color: #b71c1c; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_P->setText("0.00");

    ui->lineEdit_Q->setReadOnly(true);
    ui->lineEdit_Q->setStyleSheet("background-color: #ffebee; border: 2px solid #f44336; color: #b71c1c; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_Q->setText("0.00");

    ui->lineEdit_S->setReadOnly(true);
    ui->lineEdit_S->setStyleSheet("background-color: #ffebee; border: 2px solid #f44336; color: #b71c1c; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_S->setText("0.00");

    ui->lineEdit_fp->setReadOnly(true);
    ui->lineEdit_fp->setStyleSheet("background-color: #ffebee; border: 2px solid #f44336; color: #b71c1c; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_fp->setText("0.000");

    // RESONANCIA - Morado claro
    ui->lineEdit_fr->setReadOnly(true);
    ui->lineEdit_fr->setStyleSheet("background-color: #f3e5f5; border: 2px solid #9c27b0; color: #4a148c; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_fr->setText("0.00");

    ui->lineEdit_Qfactor->setReadOnly(true);
    ui->lineEdit_Qfactor->setStyleSheet("background-color: #f3e5f5; border: 2px solid #9c27b0; color: #4a148c; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_Qfactor->setText("0.00");

    ui->lineEdit_BW->setReadOnly(true);
    ui->lineEdit_BW->setStyleSheet("background-color: #f3e5f5; border: 2px solid #9c27b0; color: #4a148c; font-weight: bold; padding: 4px; border-radius: 4px;");
    ui->lineEdit_BW->setText("0.00");

    // Configurar título de la ventana
    this->setWindowTitle("Análisis de Circuitos RLC Serie");

    // Aplicar estilos mejorados para la ventana y botones
    this->setStyleSheet(
        "QMainWindow {"
        "    background-color: #f5f5f5;"
        "}"
        "QGroupBox {"
        "    font-weight: bold;"
        "    border: 2px solid #0078d4;"
        "    border-radius: 8px;"
        "    margin-top: 1ex;"
        "    padding-top: 10px;"
        "    background-color: #ffffff;"
        "}"
        "QGroupBox::title {"
        "    subcontrol-origin: margin;"
        "    left: 10px;"
        "    padding: 0 5px 0 5px;"
        "    color: #0078d4;"
        "    font-size: 12px;"
        "}"
        "QPushButton {"
        "    background-color: #0078d4;"
        "    color: white;"
        "    border: none;"
        "    padding: 10px 20px;"
        "    border-radius: 6px;"
        "    font-weight: bold;"
        "    font-size: 12px;"
        "    min-width: 80px;"
        "}"
        "QPushButton:hover {"
        "    background-color: #106ebe;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #005a9e;"
        "}"
        "QLineEdit {"
        "   padding: 5px;"
        "    border: 1px solid #ccc;"
        "    border-radius: 4px;"
        "    background-color: white;"
        "    color: #000000;"
        "}"
        "QLineEdit:focus {"
        "    border: 2px solid #0078d4;"
        "}"
        "QLabel {"
        "    color: #333333;"
        "    font-weight: 500;"
        "}"
        "QMessageBox {"
        "    background-color: #2b2b2b;"
        "    color: #ffffff;"
        "    border: 2px solid #0078d4;"
        "    border-radius: 8px;"
        "}"
        "QMessageBox QLabel {"
        "    color: #ffffff;"
        "    font-size: 12px;"
        "}"
        "QMessageBox QPushButton {"
        "    background-color: #0078d4;"
        "    color: #ffffff;"
        "    border: none;"
        "    padding: 8px 16px;"
        "    border-radius: 4px;"
        "    font-weight: bold;"
        "    min-width: 60px;"
        "}"
        "QMessageBox QPushButton:hover {"
        "    background-color: #106ebe;"
        "}"
        "QMessageBox QPushButton:pressed {"
        "    background-color: #005a9e;"
        "}"
        );
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::validarEntradas()
{
    // Verificar que todos los campos estén llenos
    if(ui->lineEdit_Vrms->text().isEmpty() ||
        ui->lineEdit_freq->text().isEmpty() ||
        ui->lineEdit_fase->text().isEmpty() ||
        ui->lineEdit_R->text().isEmpty() ||
        ui->lineEdit_L->text().isEmpty() ||
        ui->lineEdit_C->text().isEmpty()) {

        QMessageBox::warning(this, "Error de Validación",
                             "Por favor complete todos los campos antes de calcular.");
        return false;
    }

    // Verificar valores mínimos
    double Vrms = ui->lineEdit_Vrms->text().toDouble();
    double freq = ui->lineEdit_freq->text().toDouble();
    double R = ui->lineEdit_R->text().toDouble();
    double L = ui->lineEdit_L->text().toDouble();
    double C = ui->lineEdit_C->text().toDouble();

    if(Vrms <= 0 || freq <= 0 || R <= 0 || L <= 0 || C <= 0) {
        QMessageBox::warning(this, "Error de Validación",
                             "Todos los valores deben ser mayores que cero.");
        return false;
    }

    return true;
}

void MainWindow::calcularParametros()
{
    // Obtener valores de entrada
    double V_rms = ui->lineEdit_Vrms->text().toDouble();
    double freq = ui->lineEdit_freq->text().toDouble();
    double fase_inicial = ui->lineEdit_fase->text().toDouble();
    double R = ui->lineEdit_R->text().toDouble();
    double L = ui->lineEdit_L->text().toDouble() / 1000.0; // mH a H
    double C = ui->lineEdit_C->text().toDouble() / 1000000.0; // µF a F

    // Calcular frecuencia angular
    double omega = 2.0 * M_PI * freq;

    // Calcular reactancias
    double XL = omega * L;
    double XC = 1.0 / (omega * C);
    double X = XL - XC;

    // Calcular impedancia
    double Z = qSqrt(R*R + X*X);
    double phi_rad = qAtan2(X, R);
    double phi_deg = phi_rad * 180.0 / M_PI;

    // Calcular corriente
    double I_rms = V_rms / Z;

    // Calcular voltajes RMS
    double VR = I_rms * R;
    double VL = I_rms * XL;
    double VC = I_rms * XC;

    // Calcular potencias
    double P = I_rms * I_rms * R;
    double Q = I_rms * I_rms * X;
    double S = V_rms * I_rms;
    double factor_potencia = qAbs(qCos(phi_rad));

    // Calcular parámetros de resonancia
    double fr = 1.0 / (2.0 * M_PI * qSqrt(L * C));
    double Q_factor = (1.0/R) * qSqrt(L/C);
    double BW = fr / Q_factor;

    // Mostrar resultados - Reactancias
    ui->lineEdit_XL->setText(QString::number(XL, 'f', 2));
    ui->lineEdit_XC->setText(QString::number(XC, 'f', 2));
    ui->lineEdit_X->setText(QString::number(X, 'f', 2));

    // Mostrar impedancia y corriente
    ui->lineEdit_Z->setText(QString::number(Z, 'f', 2));
    ui->lineEdit_phi->setText(QString::number(phi_deg, 'f', 2));
    ui->lineEdit_I->setText(QString::number(I_rms, 'f', 4));
    ui->lineEdit_tipo->setText(determinarTipo(X));

    // Mostrar voltajes
    ui->lineEdit_VR->setText(QString::number(VR, 'f', 2));
    ui->lineEdit_VL->setText(QString::number(VL, 'f', 2));
    ui->lineEdit_VC->setText(QString::number(VC, 'f', 2));

    // Mostrar potencias
    ui->lineEdit_P->setText(QString::number(P, 'f', 2));
    ui->lineEdit_Q->setText(QString::number(Q, 'f', 2));
    ui->lineEdit_S->setText(QString::number(S, 'f', 2));
    ui->lineEdit_fp->setText(QString::number(factor_potencia, 'f', 3));

    // Mostrar resonancia
    ui->lineEdit_fr->setText(QString::number(fr, 'f', 2));
    ui->lineEdit_Qfactor->setText(QString::number(Q_factor, 'f', 2));
    ui->lineEdit_BW->setText(QString::number(BW, 'f', 2));

    // Verificar condición de resonancia
    double diferencia_porcentual = qAbs(freq - fr) / fr * 100.0;
    if(diferencia_porcentual < 1.0) { // Dentro del 1%
        QMessageBox::information(this, "Condición de Resonancia",
                                 QString("¡El circuito está operando cerca de la frecuencia de resonancia!\n"
                                         "Frecuencia actual: %1 Hz\n"
                                         "Frecuencia de resonancia: %2 Hz\n"
                                         "Diferencia: %3%")
                                     .arg(freq, 0, 'f', 2)
                                     .arg(fr, 0, 'f', 2)
                                     .arg(diferencia_porcentual, 0, 'f', 2));
    }

    // Mostrar información adicional si el circuito es altamente reactivo
    double relacion_X_R = qAbs(X) / R;
    if(relacion_X_R > 10.0) {
        QMessageBox::information(this, "Circuito Altamente Reactivo",
                                 QString("El circuito es altamente reactivo:\n"
                                         "Relación |X|/R = %1\n"
                                         "Esto significa que la componente reactiva domina sobre la resistiva.")
                                     .arg(relacion_X_R, 0, 'f', 1));
    }
}

QString MainWindow::determinarTipo(double X)
{
    if(qAbs(X) < 0.1) {
        return "Resistivo (Resonancia)";
    } else if(X > 0.1) {
        return "Inductivo";
    } else {
        return "Capacitivo";
    }
}

void MainWindow::limpiarCampos()
{
    // Limpiar entradas
    ui->lineEdit_Vrms->clear();
    ui->lineEdit_freq->clear();
    ui->lineEdit_fase->clear();
    ui->lineEdit_R->clear();
    ui->lineEdit_L->clear();
    ui->lineEdit_C->clear();

    // Limpiar resultados - Reactancias
    ui->lineEdit_XL->setText("0.00");
    ui->lineEdit_XC->setText("0.00");
    ui->lineEdit_X->setText("0.00");

    // Limpiar Impedancia y Corriente
    ui->lineEdit_Z->setText("0.00");
    ui->lineEdit_phi->setText("0.00");
    ui->lineEdit_I->setText("0.0000");
    ui->lineEdit_tipo->setText("---");

    // Limpiar Voltajes
    ui->lineEdit_VR->setText("0.00");
    ui->lineEdit_VL->setText("0.00");
    ui->lineEdit_VC->setText("0.00");

    // Limpiar Potencias
    ui->lineEdit_P->setText("0.00");
    ui->lineEdit_Q->setText("0.00");
    ui->lineEdit_S->setText("0.00");
    ui->lineEdit_fp->setText("0.000");

    // Limpiar Resonancia
    ui->lineEdit_fr->setText("0.00");
    ui->lineEdit_Qfactor->setText("0.00");
    ui->lineEdit_BW->setText("0.00");
}

void MainWindow::on_pushButton_calcular_clicked()
{
    if(validarEntradas()) {
        calcularParametros();
    }
}

void MainWindow::on_pushButton_limpiar_clicked()
{
    limpiarCampos();
}

void MainWindow::on_pushButton_salir_clicked()
{
    QApplication::quit();
}
