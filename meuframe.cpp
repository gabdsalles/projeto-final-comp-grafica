#include "meuframe.h"
#include <QPainter>
#include <iostream>
#include <unistd.h>
#include <ponto.h>
#include <objeto.h>
#include <cstdlib>

using namespace std;

meuframe::meuframe(QWidget *parent)
    : QFrame{parent}
{

}

void meuframe::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);
    QPainter painter(this);
    painter.setPen(QPen(Qt::blue, 5));

    for (int i = 0; i < displayFile.size(); i++)
        desenharObjeto(displayFile[i].m_listaPontos, painter, displayFile[i].m_tipo);
}

void meuframe::apagarDisplayFile() {

    displayFile.clear();
}
void meuframe::adicionarPonto() {

    QList <Ponto> pontos;
    int randomX = rand() % (maxX - minX + 1) + minX;
    int randomY = rand() % (maxY - minY + 1) + minY;
    Ponto p(randomX,randomY);
    pontos.append(p);;
    Objeto MyObj (pontos, 1);
    displayFile.append(MyObj);
}

void meuframe::adicionarReta() {

    QList <Ponto> listaPontos;
    for (int i = 0; i < 2; i++) {
        int randomX = rand() % (maxX - minX + 1) + minX;
        int randomY = rand() % (maxY - minY + 1) + minY;
        Ponto p(randomX,randomY);
        listaPontos.append(p);
    }
    Objeto MyObj (listaPontos, 2);
    displayFile.append(MyObj);
}

void meuframe::adicionarTriangulo() {

    QList <Ponto> listaPontos;
    for (int i = 0; i < 3; i++) {
        int randomX = rand() % (maxX - minX + 1) + minX;
        int randomY = rand() % (maxY - minY + 1) + minY;
        Ponto p(randomX,randomY);
        listaPontos.append(p);
    }
    Objeto MyObj (listaPontos, 3);
    displayFile.append(MyObj);
}

void meuframe::adicionarQuadrado() {

    QList <Ponto> listaPontos;
    int random1 = rand() % (maxX - minX + 1) + minX;
    int random2 = rand() % (maxY - minY + 1) + minY;
    Ponto p1(random1,random1);
    listaPontos.append(p1);
    Ponto p2(random1, random2);
    listaPontos.append(p2);
    Ponto p3(random2,random2);
    listaPontos.append(p3);
    Ponto p4(random2,random1);
    listaPontos.append(p4);
    Objeto MyObj (listaPontos, 4);
    displayFile.append(MyObj);
}

void meuframe::desenharObjeto(QList <Ponto> lista, QPainter &painter, int tipo) {

    int i = 0, j = 1, cont = 1;

    if (tipo == 1)
        painter.drawPoint(lista[0].getPositionX(), lista[0].getPositionY());
    else
        while (cont <= tipo) {
            painter.drawLine(lista[i].getPositionX(), lista[i].getPositionY(),
                    lista[j].getPositionX(), lista[j].getPositionY());
            i++;
            j++;
            if (j == tipo) j = 0;
            cont++;
        }

}
