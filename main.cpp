#include "mainwindow.h"
#include <iostream>
#include <objeto.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

    /*Objeto objeto;
    objeto.nome = "Teste";
    cout << objeto.nome << endl;*/
}
