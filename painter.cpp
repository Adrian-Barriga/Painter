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

    // Establecer un color a su pincel
    pintor.setPen(Qt::red);

    // Dibujar una linea
    pintor.drawLine(100, 100, 100, 100);

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
    // Las primeas 2 coordenadas se refieren a la posicion (x,y) del objeto
    // Las otras 2 se refieren a las dimensiones del objeto (ancho y altura)
    pintor.drawRect(250, 350, 200, 50);

    // Crear un nuevo color
    // El orden de los colores funciona en (RGB)
    // El ultimo numero es la intensidad y transparencia.
    QColor miColor(5,221,129,50);

    // Crear un nuevo pincel
    QPen pincel2;
    // Establecer color
    pincel2.setColor(Qt::yellow);
    // El grosor del pincel
    pincel2.setWidth(5);
    // Se establece el estilo de la linea
    // Podemos ver el estilo de la linea con F1
    pincel2.setStyle(Qt::DashLine);

    // Establecer el nuevo pincel
    //Llamamos al nuevo pincel

    pintor.setPen(pincel2);

    // Cambiar la brocha
    // Llamamos al color --setBrush(miColor)-- para poder modificar el color

    pintor.setBrush(miColor);
    pintor.setBrush(Qt::black);


    /* ¿Cómo dibujar un arco?

     * El arco es una figura que tiene 6 parametros.
     * Los 2 primeros valores hacen referencia a la posicion del arco (X,Y) dentro del terminal visto desde la punta.
     * El tercer valor nos señala el ancho del arco es decir la distancia entre los extremos del arco.
     * El cuarto valor nos señala la altura del arco.
     * El QUinto valor nos señala el  angulo de inicio.
     * EL sexto valor nos señala el angulo de extension.
     *
     * Como añadido si queremos saber mas sobre la figura que vamos a seleccionar el --draw ...-- y luego aplastamos al tacla F1*/


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

    //Dibujar un arco (Figura 5)
    QPen pincel9;
    pincel9.setColor(Qt::black);
    pincel9.setWidth(10);
    pintor.setPen(pincel9);
    pintor.drawArc(170,190,250,100,30*16,120*16);

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

