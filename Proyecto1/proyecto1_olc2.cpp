#include "proyecto1_olc2.hpp"
#include "Environment/ast.hpp"
#include "ui_proyecto1_olc2.h"
#include <QMessageBox>
#include "parserctx.hpp"
#include <iostream>
using namespace std;
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


void Proyecto1_OLC2::on_pushButton_clicked()
{
    QMessageBox *msg = new QMessageBox();
    //creando entorno global
    environment *GlobalEnv = new environment(nullptr, "Global");
    //creando ast
    ast *Root = new ast();
    //ejecuta el analizador
    OCL2Calc::ParserCtx analizador;
    analizador.Analizar(ui->textEdit->toPlainText().toStdString());
    //ejecutar main
    analizador.Main->ejecutar(GlobalEnv, Root);
    //valio errores
    if(Root->ErrorOut == "")
    {
        //despliega el mensaje
        msg->setText(QString::fromStdString(analizador.Salida));
        msg->exec();
        ui->textEdit_2->setText(QString::fromStdString(Root->ConsoleOut));
    }
    else
    {
        //despliega el mensaje
        msg->setText(QString::fromStdString("Se encontraron algunos errores.."));
        msg->exec();
        ui->textEdit_2->setText(QString::fromStdString(Root->ErrorOut));
    }

}

