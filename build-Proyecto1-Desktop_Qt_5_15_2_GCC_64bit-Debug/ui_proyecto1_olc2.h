/********************************************************************************
** Form generated from reading UI file 'proyecto1_olc2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROYECTO1_OLC2_H
#define UI_PROYECTO1_OLC2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Proyecto1_OLC2
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Proyecto1_OLC2)
    {
        if (Proyecto1_OLC2->objectName().isEmpty())
            Proyecto1_OLC2->setObjectName(QString::fromUtf8("Proyecto1_OLC2"));
        Proyecto1_OLC2->resize(800, 600);
        centralwidget = new QWidget(Proyecto1_OLC2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(100, 90, 251, 101));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(140, 300, 461, 201));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 100, 151, 31));
        Proyecto1_OLC2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Proyecto1_OLC2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Proyecto1_OLC2->setMenuBar(menubar);
        statusbar = new QStatusBar(Proyecto1_OLC2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Proyecto1_OLC2->setStatusBar(statusbar);

        retranslateUi(Proyecto1_OLC2);

        QMetaObject::connectSlotsByName(Proyecto1_OLC2);
    } // setupUi

    void retranslateUi(QMainWindow *Proyecto1_OLC2)
    {
        Proyecto1_OLC2->setWindowTitle(QCoreApplication::translate("Proyecto1_OLC2", "Proyecto1_OLC2", nullptr));
        pushButton->setText(QCoreApplication::translate("Proyecto1_OLC2", "RUN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Proyecto1_OLC2: public Ui_Proyecto1_OLC2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROYECTO1_OLC2_H
