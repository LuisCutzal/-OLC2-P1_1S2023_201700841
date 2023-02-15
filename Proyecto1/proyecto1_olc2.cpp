#include "proyecto1_olc2.hpp"
#include "ui_proyecto1_olc2.h"

Proyecto1_OLC2::Proyecto1_OLC2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Proyecto1_OLC2)
{
    ui->setupUi(this);
}

Proyecto1_OLC2::~Proyecto1_OLC2()
{
    delete ui;
}

