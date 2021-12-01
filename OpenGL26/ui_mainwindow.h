/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <widgetopengl.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    WidgetOpenGL *widgetOpenGL;
    QSlider *horizontalSlider_Slider;
    QGroupBox *groupBoxView;
    QHBoxLayout *horizontalLayout;
    QSlider *verticalSliderRotX;
    QSlider *verticalSliderRotZ;
    QSlider *verticalSliderRotY;
    QSpacerItem *horizontalSpacer;
    QSlider *verticalSliderZoom;
    QGroupBox *groupBoxLight;
    QHBoxLayout *horizontalLayout_2;
    QSlider *verticalSliderLightX;
    QSlider *verticalSliderLightY;
    QSlider *verticalSliderLightZ;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(883, 595);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widgetOpenGL = new WidgetOpenGL(centralWidget);
        widgetOpenGL->setObjectName(QString::fromUtf8("widgetOpenGL"));
        widgetOpenGL->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(widgetOpenGL, 0, 0, 1, 1);

        horizontalSlider_Slider = new QSlider(centralWidget);
        horizontalSlider_Slider->setObjectName(QString::fromUtf8("horizontalSlider_Slider"));
        horizontalSlider_Slider->setMaximum(10000);
        horizontalSlider_Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_Slider, 1, 0, 1, 1);

        groupBoxView = new QGroupBox(centralWidget);
        groupBoxView->setObjectName(QString::fromUtf8("groupBoxView"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxView->sizePolicy().hasHeightForWidth());
        groupBoxView->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBoxView);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalSliderRotX = new QSlider(groupBoxView);
        verticalSliderRotX->setObjectName(QString::fromUtf8("verticalSliderRotX"));
        verticalSliderRotX->setMaximum(3600);
        verticalSliderRotX->setValue(1900);
        verticalSliderRotX->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotX);

        verticalSliderRotZ = new QSlider(groupBoxView);
        verticalSliderRotZ->setObjectName(QString::fromUtf8("verticalSliderRotZ"));
        verticalSliderRotZ->setMaximum(3600);
        verticalSliderRotZ->setValue(1800);
        verticalSliderRotZ->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotZ);

        verticalSliderRotY = new QSlider(groupBoxView);
        verticalSliderRotY->setObjectName(QString::fromUtf8("verticalSliderRotY"));
        verticalSliderRotY->setMaximum(3600);
        verticalSliderRotY->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderRotY);

        horizontalSpacer = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalSliderZoom = new QSlider(groupBoxView);
        verticalSliderZoom->setObjectName(QString::fromUtf8("verticalSliderZoom"));
        verticalSliderZoom->setMaximum(1000);
        verticalSliderZoom->setValue(100);
        verticalSliderZoom->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(verticalSliderZoom);


        gridLayout->addWidget(groupBoxView, 0, 5, 2, 1);

        groupBoxLight = new QGroupBox(centralWidget);
        groupBoxLight->setObjectName(QString::fromUtf8("groupBoxLight"));
        sizePolicy.setHeightForWidth(groupBoxLight->sizePolicy().hasHeightForWidth());
        groupBoxLight->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(groupBoxLight);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalSliderLightX = new QSlider(groupBoxLight);
        verticalSliderLightX->setObjectName(QString::fromUtf8("verticalSliderLightX"));
        verticalSliderLightX->setMinimum(-100);
        verticalSliderLightX->setMaximum(100);
        verticalSliderLightX->setValue(10);
        verticalSliderLightX->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalSliderLightX);

        verticalSliderLightY = new QSlider(groupBoxLight);
        verticalSliderLightY->setObjectName(QString::fromUtf8("verticalSliderLightY"));
        verticalSliderLightY->setMinimum(-100);
        verticalSliderLightY->setMaximum(100);
        verticalSliderLightY->setValue(30);
        verticalSliderLightY->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalSliderLightY);

        verticalSliderLightZ = new QSlider(groupBoxLight);
        verticalSliderLightZ->setObjectName(QString::fromUtf8("verticalSliderLightZ"));
        verticalSliderLightZ->setMinimum(-100);
        verticalSliderLightZ->setMaximum(100);
        verticalSliderLightZ->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalSliderLightZ);


        gridLayout->addWidget(groupBoxLight, 0, 6, 2, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBoxView->setTitle(QCoreApplication::translate("MainWindow", "Widok", nullptr));
        groupBoxLight->setTitle(QCoreApplication::translate("MainWindow", "\305\232wiat\305\202o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
