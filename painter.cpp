#include "painter.h"
#include "ui_painter.h"

Painter::Painter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Painter)
{
    ui->setupUi(this);
}

Painter::~Painter()
{
    delete ui;
}

void Painter::paintEvent(QPaintEvent *event)
{
    // Crear el objeto painter. Establecer el formulario como su lienzo
    QPainter pintor(this);

    // establecer un color a su pincel
    pintor.setPen(Qt::red);

    // Dibujar una linea
    pintor.drawLine(100, 100, 100, 100);
    //pintor.drawLine(100, 150, 200, 200);

    // Cambiar el color del pincel
    pintor.setPen(Qt::black);

    // Establecer un tipo y tamaño de letra
    pintor.setFont(QFont("Times New Roman",30));

    // Dibujar un texto
    pintor.drawText(130,50,"Un Dibujo Simple y Sencillo");

    // Crear un nuevo pincel
    QPen pincel;
    pincel.setColor(Qt::green);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // Utilizar el nuevo pincel
    pintor.setPen(pincel);

    // Establecer una brocha
    // EStablecer el color de la brocha
    pintor.setBrush(Qt::black);

    // Dibujar un rectangulo
    // Las primeas 2 coordenadas se refieren a la posicion del objeto
    // Las otras 2 se refieren a las dimensiones del objeto
    pintor.drawRect(250, 350, 200, 50);

    // Crear un nuevo color
    //El orden de los colores RGB y el ultimo numero es la intensidad y transparencia
    QColor miColor(5,221,129,50);

    // Crear un nuevo pincel
    QPen pincel2;
    //Establecer color
    pincel2.setColor(Qt::yellow);
    //El grosor del pincel
    pincel2.setWidth(5);
    //Se establece el estilo de la linea
    //Podemos ver el estilo de la linea con F1
    pincel2.setStyle(Qt::DashLine);

    // Establecer el nuevo pincel
    //Llamamos al nuevo pincel
    pintor.setPen(pincel2);

    // Cambiar la brocha
    //Llamamos al color para ocupar otro color
    pintor.setBrush(miColor);

    pintor.setBrush(Qt::black);

    //QColor miColor1(250,100,100,100);
    //pintor.setBrush(miColor1);

    //Podemos ver el tipo de figuras con F1

    //Coordenadas desde donde empieza el arco
    //Tercer numero Ancho, cuarto altura


    //Dibujar un Arco

    QPen pincel3;
    pincel3.setColor(Qt::black);
    pincel3.setWidth(10);
    pintor.setPen(pincel3);
    pintor.drawArc(400,450,100,1000,30*16,120*16);


    //Dibujar un Arco (Figura 2)
    QPen pincel4;
    pincel4.setColor(Qt::black);
    pincel4.setWidth(10);
    pintor.setPen(pincel4);
    pintor.drawArc(200,450,100,1000,30*16,120*16);

    //Dibujar un Arco (Figura 3)
    QPen pincel7;
    pincel7.setColor(Qt::black);
    pincel7.setWidth(10);
    pintor.setPen(pincel7);
    pintor.drawArc(90,75,100,800,40*16,120*16);

    //Dibujar un Arco (Figura 4)
    QPen pincel8;
    pincel8.setColor(Qt::black);
    pincel8.setWidth(10);
    pintor.setPen(pincel8);
    pintor.drawArc(500,75,-100,800,40*16,100*16);

    //Dibujar un circulo
    QPen pincel5;
    pincel5.setColor(Qt::yellow);
    pincel5.setWidth(15);
    pintor.setPen(pincel5);
    pintor.drawEllipse(190, 230, 100, 100);

    //Dibujar un circulo (Figura 2)
    QPen pincel6;
    pincel6.setColor(Qt::yellow);
    pincel6.setWidth(15);
    pintor.setPen(pincel5);
    pintor.drawEllipse(416, 230, 100, 100);
}

