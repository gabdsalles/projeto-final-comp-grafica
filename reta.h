#ifndef RETA_H
#define RETA_H

#include <ponto.h>
#include <QList>


class Reta
{
public:
    Reta(QList <Ponto> listaPontos);
    QList <Ponto> listaPontos;
};

#endif // RETA_H

