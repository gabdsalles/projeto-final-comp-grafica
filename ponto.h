#ifndef PONTO_H
#define PONTO_H


class Ponto
{
public:
    Ponto(int x, int y);
    void setPositionX(int x);
    void setPositionY(int y);
    int getPositionX();
    int getPositionY();
private:
    int x;
    int y;
};

#endif // PONTO_H
