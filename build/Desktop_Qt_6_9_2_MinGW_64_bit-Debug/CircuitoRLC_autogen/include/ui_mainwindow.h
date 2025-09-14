/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_Vrms;
    QLabel *label_2;
    QLineEdit *lineEdit_freq;
    QLabel *label_3;
    QLineEdit *lineEdit_fase;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_R;
    QLabel *label_5;
    QLineEdit *lineEdit_L;
    QLabel *label_6;
    QLineEdit *lineEdit_C;
    QGroupBox *groupBox_3;
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_XL;
    QLabel *label_8;
    QLineEdit *lineEdit_XC;
    QLabel *label_9;
    QLineEdit *lineEdit_X;
    QGroupBox *groupBox_5;
    QWidget *widget3;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit_Z;
    QLineEdit *lineEdit_I;
    QLabel *label_13;
    QLineEdit *lineEdit_phi;
    QLineEdit *lineEdit_tipo;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_14;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QLineEdit *lineEdit_VR;
    QLabel *label_11;
    QLineEdit *lineEdit_VL;
    QLabel *label_12;
    QLineEdit *lineEdit_VC;
    QGridLayout *gridLayout_7;
    QLabel *label_18;
    QLineEdit *lineEdit_P;
    QLabel *label_22;
    QLineEdit *lineEdit_Q;
    QLabel *label_17;
    QLineEdit *lineEdit_S;
    QLabel *label_23;
    QLineEdit *lineEdit_fp;
    QGroupBox *groupBox_6;
    QWidget *widget4;
    QGridLayout *gridLayout_6;
    QLabel *label_19;
    QLineEdit *lineEdit_fr;
    QLabel *label_20;
    QLineEdit *lineEdit_Qfactor;
    QLabel *label_21;
    QLineEdit *lineEdit_BW;
    QPushButton *pushButton_calcular;
    QPushButton *pushButton_limpiar;
    QPushButton *pushButton_salir;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 658);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1000, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 30, 351, 151));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 185, 88));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_Vrms = new QLineEdit(widget);
        lineEdit_Vrms->setObjectName("lineEdit_Vrms");

        gridLayout->addWidget(lineEdit_Vrms, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_freq = new QLineEdit(widget);
        lineEdit_freq->setObjectName("lineEdit_freq");

        gridLayout->addWidget(lineEdit_freq, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_fase = new QLineEdit(widget);
        lineEdit_fase->setObjectName("lineEdit_fase");

        gridLayout->addWidget(lineEdit_fase, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(420, 30, 351, 151));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 30, 210, 88));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_R = new QLineEdit(widget1);
        lineEdit_R->setObjectName("lineEdit_R");

        gridLayout_2->addWidget(lineEdit_R, 0, 1, 1, 1);

        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        lineEdit_L = new QLineEdit(widget1);
        lineEdit_L->setObjectName("lineEdit_L");

        gridLayout_2->addWidget(lineEdit_L, 1, 1, 1, 1);

        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        lineEdit_C = new QLineEdit(widget1);
        lineEdit_C->setObjectName("lineEdit_C");

        gridLayout_2->addWidget(lineEdit_C, 2, 1, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(50, 190, 351, 121));
        widget2 = new QWidget(groupBox_3);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 20, 149, 88));
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget2);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        lineEdit_XL = new QLineEdit(widget2);
        lineEdit_XL->setObjectName("lineEdit_XL");

        gridLayout_3->addWidget(lineEdit_XL, 0, 1, 1, 1);

        label_8 = new QLabel(widget2);
        label_8->setObjectName("label_8");

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        lineEdit_XC = new QLineEdit(widget2);
        lineEdit_XC->setObjectName("lineEdit_XC");

        gridLayout_3->addWidget(lineEdit_XC, 1, 1, 1, 1);

        label_9 = new QLabel(widget2);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        lineEdit_X = new QLineEdit(widget2);
        lineEdit_X->setObjectName("lineEdit_X");

        gridLayout_3->addWidget(lineEdit_X, 2, 1, 1, 1);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(50, 330, 351, 161));
        widget3 = new QWidget(groupBox_5);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(10, 30, 149, 121));
        gridLayout_5 = new QGridLayout(widget3);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_Z = new QLineEdit(widget3);
        lineEdit_Z->setObjectName("lineEdit_Z");

        gridLayout_5->addWidget(lineEdit_Z, 0, 1, 1, 1);

        lineEdit_I = new QLineEdit(widget3);
        lineEdit_I->setObjectName("lineEdit_I");

        gridLayout_5->addWidget(lineEdit_I, 2, 1, 1, 1);

        label_13 = new QLabel(widget3);
        label_13->setObjectName("label_13");

        gridLayout_5->addWidget(label_13, 0, 0, 1, 1);

        lineEdit_phi = new QLineEdit(widget3);
        lineEdit_phi->setObjectName("lineEdit_phi");

        gridLayout_5->addWidget(lineEdit_phi, 1, 1, 1, 1);

        lineEdit_tipo = new QLineEdit(widget3);
        lineEdit_tipo->setObjectName("lineEdit_tipo");

        gridLayout_5->addWidget(lineEdit_tipo, 3, 1, 1, 1);

        label_16 = new QLabel(widget3);
        label_16->setObjectName("label_16");

        gridLayout_5->addWidget(label_16, 3, 0, 1, 1);

        label_15 = new QLabel(widget3);
        label_15->setObjectName("label_15");

        gridLayout_5->addWidget(label_15, 2, 0, 1, 1);

        label_14 = new QLabel(widget3);
        label_14->setObjectName("label_14");

        gridLayout_5->addWidget(label_14, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(420, 190, 311, 261));
        gridLayout_8 = new QGridLayout(groupBox_4);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName("label_10");

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        lineEdit_VR = new QLineEdit(groupBox_4);
        lineEdit_VR->setObjectName("lineEdit_VR");

        gridLayout_4->addWidget(lineEdit_VR, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName("label_11");

        gridLayout_4->addWidget(label_11, 1, 0, 1, 1);

        lineEdit_VL = new QLineEdit(groupBox_4);
        lineEdit_VL->setObjectName("lineEdit_VL");

        gridLayout_4->addWidget(lineEdit_VL, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName("label_12");

        gridLayout_4->addWidget(label_12, 2, 0, 1, 1);

        lineEdit_VC = new QLineEdit(groupBox_4);
        lineEdit_VC->setObjectName("lineEdit_VC");

        gridLayout_4->addWidget(lineEdit_VC, 2, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName("label_18");

        gridLayout_7->addWidget(label_18, 0, 0, 1, 1);

        lineEdit_P = new QLineEdit(groupBox_4);
        lineEdit_P->setObjectName("lineEdit_P");

        gridLayout_7->addWidget(lineEdit_P, 0, 1, 1, 1);

        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName("label_22");

        gridLayout_7->addWidget(label_22, 1, 0, 1, 1);

        lineEdit_Q = new QLineEdit(groupBox_4);
        lineEdit_Q->setObjectName("lineEdit_Q");

        gridLayout_7->addWidget(lineEdit_Q, 1, 1, 1, 1);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName("label_17");

        gridLayout_7->addWidget(label_17, 2, 0, 1, 1);

        lineEdit_S = new QLineEdit(groupBox_4);
        lineEdit_S->setObjectName("lineEdit_S");

        gridLayout_7->addWidget(lineEdit_S, 2, 1, 1, 1);

        label_23 = new QLabel(groupBox_4);
        label_23->setObjectName("label_23");

        gridLayout_7->addWidget(label_23, 3, 0, 1, 1);

        lineEdit_fp = new QLineEdit(groupBox_4);
        lineEdit_fp->setObjectName("lineEdit_fp");

        gridLayout_7->addWidget(lineEdit_fp, 3, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 1, 0, 1, 1);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(410, 450, 341, 141));
        widget4 = new QWidget(groupBox_6);
        widget4->setObjectName("widget4");
        widget4->setGeometry(QRect(10, 20, 149, 88));
        gridLayout_6 = new QGridLayout(widget4);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(widget4);
        label_19->setObjectName("label_19");

        gridLayout_6->addWidget(label_19, 0, 0, 1, 1);

        lineEdit_fr = new QLineEdit(widget4);
        lineEdit_fr->setObjectName("lineEdit_fr");

        gridLayout_6->addWidget(lineEdit_fr, 0, 1, 1, 1);

        label_20 = new QLabel(widget4);
        label_20->setObjectName("label_20");

        gridLayout_6->addWidget(label_20, 1, 0, 1, 1);

        lineEdit_Qfactor = new QLineEdit(widget4);
        lineEdit_Qfactor->setObjectName("lineEdit_Qfactor");

        gridLayout_6->addWidget(lineEdit_Qfactor, 1, 1, 1, 1);

        label_21 = new QLabel(widget4);
        label_21->setObjectName("label_21");

        gridLayout_6->addWidget(label_21, 2, 0, 1, 1);

        lineEdit_BW = new QLineEdit(widget4);
        lineEdit_BW->setObjectName("lineEdit_BW");

        gridLayout_6->addWidget(lineEdit_BW, 2, 1, 1, 1);

        pushButton_calcular = new QPushButton(centralwidget);
        pushButton_calcular->setObjectName("pushButton_calcular");
        pushButton_calcular->setGeometry(QRect(60, 510, 121, 29));
        pushButton_limpiar = new QPushButton(centralwidget);
        pushButton_limpiar->setObjectName("pushButton_limpiar");
        pushButton_limpiar->setGeometry(QRect(60, 560, 111, 29));
        pushButton_salir = new QPushButton(centralwidget);
        pushButton_salir->setObjectName("pushButton_salir");
        pushButton_salir->setGeometry(QRect(220, 530, 121, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "An\303\241lisis de Circuitos RLC Serie", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Par\303\241metros de la Fuente", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Voltaje RMS (V):", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Frecuencia (Hz):", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Fase inicial (\302\260):", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Par\303\241metros del Circuito", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Resistencia R (\316\251)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Inductancia L (mH):", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Capacitancia C (\302\265F):", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Resultados - Reactancias", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "XL (\316\251):", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "XC (\316\251):", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "X neta (\316\251):", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Impedancia y Corriente", nullptr));
        lineEdit_Z->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "Z (\316\251):", nullptr));
        lineEdit_tipo->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "Tipo", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "I RMS (A):", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\317\206 (\302\260):", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Voltajes y Potencias", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "VR (V):", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "VL (V):", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "VC (V):", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "P (W):", nullptr));
        lineEdit_P->setText(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", "Q (VAR):", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "S (VA):", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Factor de Potencia:", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "An\303\241lisis de Resonancia", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "fr (Hz):", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Q factor:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "BW (Hz):", nullptr));
        pushButton_calcular->setText(QCoreApplication::translate("MainWindow", "CALCULAR", nullptr));
        pushButton_limpiar->setText(QCoreApplication::translate("MainWindow", "LIMPIAR", nullptr));
        pushButton_salir->setText(QCoreApplication::translate("MainWindow", "SALIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
