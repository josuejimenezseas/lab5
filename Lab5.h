#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Lab5.h"

class Lab5 : public QMainWindow
{
    Q_OBJECT

public:
    Lab5(QWidget *parent = nullptr);
    ~Lab5();

private:
    Ui::Lab5Class ui;
};

