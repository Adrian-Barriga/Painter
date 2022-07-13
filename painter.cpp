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
    pintor.drawLine(100, 100, 200, 200);

    // Cambiar el color del pincel
    pintor.setPen(Qt::red);

    // Establecer un tipo y tamaño de letra
    pintor.setFont(QFont("Arial",30));

    // Dibujar un texto
    pintor.drawText(250,150,"Picaso");

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
    pintor.drawRect(200, 200, 300, 100);

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

    // Dibuar una elipse
    pintor.setBrush(Qt::black);

    QPen pincel3;
    pincel3.setColor(Qt::red);
    pincel3.setWidth(5);
    pintor.setPen(pincel3);


    //QColor miColor1(250,100,100,100);
    //pintor.setBrush(miColor1);

    //Podemos ver el tipo de figuras con F1

    //Coordenadas desde donde empieza el arco
    //Tercer numero Ancho, cuarto altura
    pintor.drawArc(400,400,100,1000,30*16,120*16);
}

