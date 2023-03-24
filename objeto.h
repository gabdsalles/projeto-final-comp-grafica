#ifndef OBJETO_H
#define OBJETO_H
#include <iostream>
#include <ponto.h>
#include <QList>

using namespace std;


class Objeto
{
public:
    Objeto(QList <Ponto> listaPontos, int tipo);
    Objeto();
    QList <Ponto> m_listaPontos;
    int m_tipo;

    /* tipo do objeto:
     * 0 - ponto
     * 1 - reta
     * 2 - triangulo
     * 3 - quadrado*/

};

#endif // OBJETO_H
