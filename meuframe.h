#ifndef MEUFRAME_H
#define MEUFRAME_H

#include <QFrame>
#include <QPaintEvent>
#include <QList>
#include "objeto.h"

class meuframe : public QFrame
{
    Q_OBJECT
private:
    int minX = 0, minY = 0;
    int maxX = 331, maxY = 221;

public:
    explicit meuframe(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;
    QList <Objeto> displayFile;
    void desenharObjeto(QList <Ponto> lista, QPainter &painter, int tipo);
    void desenharPonto(QList <Ponto> lista, QPainter &painter);
    void desenharReta(QList <Ponto> lista, QPainter &painter);
    void desenharTriangulo(QList <Ponto> lista, QPainter &painter);
    void desenharQuadrado(QList <Ponto> lista, QPainter &painter);

public slots:
    void adicionarPonto();
    void adicionarReta();
    void adicionarTriangulo();
    void adicionarQuadrado();
    void apagarDisplayFile();

signals:

};

#endif // MEU_FRAME_H

