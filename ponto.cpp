#include "ponto.h"

Ponto::Ponto(int x, int y): x(x), y(y)
{

}


void Ponto::setPositionX(int x){
    this->x = x;
}

void Ponto::setPositionY(int y){
    this->y = y;
}

int Ponto::getPositionX(){
    return this->x;
}

int Ponto::getPositionY(){
    return this->y;
}
