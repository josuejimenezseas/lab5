/********************************************************************************
** Form generated from reading UI file 'Lab5.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB5_H
#define UI_LAB5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab5Class
{
public:
    QWidget *centralWidget;
    QLabel *lblSaludo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Lab5Class)
    {
        if (Lab5Class->objectName().isEmpty())
            Lab5Class->setObjectName("Lab5Class");
        Lab5Class->resize(336, 301);
        centralWidget = new QWidget(Lab5Class);
        centralWidget->setObjectName("centralWidget");
        lblSaludo = new QLabel(centralWidget);
        lblSaludo->setObjectName("lblSaludo");
        lblSaludo->setGeometry(QRect(20, 35, 301, 31));
        Lab5Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Lab5Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 336, 21));
        Lab5Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Lab5Class);
        mainToolBar->setObjectName("mainToolBar");
        Lab5Class->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Lab5Class);
        statusBar->setObjectName("statusBar");
        Lab5Class->setStatusBar(statusBar);

        retranslateUi(Lab5Class);

        QMetaObject::connectSlotsByName(Lab5Class);
    } // setupUi

    void retranslateUi(QMainWindow *Lab5Class)
    {
        Lab5Class->setWindowTitle(QCoreApplication::translate("Lab5Class", "Lab5", nullptr));
        lblSaludo->setText(QCoreApplication::translate("Lab5Class", "\302\241Pura vida! Mi primera aplicaci\303\263n de escritorio en C++\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab5Class: public Ui_Lab5Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB5_H
