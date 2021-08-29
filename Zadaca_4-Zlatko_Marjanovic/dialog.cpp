#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent):
      QDialog(parent),
      ui(new Ui::Dialog)
{

    ui->setupUi(this);
    scene= new QGraphicsScene (this);



}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{


    QPainter painter(this);
    painter.translate(500,350);

    QBrush cetka2(Qt::gray);
    QRect pozadina(-600,-600,10000,10000);
    painter.fillRect(pozadina,cetka2);
    painter.drawRect(pozadina);



    QPoint tacka_centar(0,0);
    QPoint tacka_x(400,0);
    QPoint tacka_x1(-400,0);
    QPoint tacka_y(0,-300);







    QPen tackapen;
    tackapen.setWidth(2);
    tackapen.setColor(Qt::black);
    tackapen.setCapStyle(Qt::RoundCap);
    painter.setPen(tackapen);


    painter.drawPoint(tacka_centar);
    painter.drawPoint(tacka_x);
    painter.drawPoint(tacka_y);
    painter.drawPoint(tacka_x1);


    painter.drawText(-400,30,"Septembar");
    painter.drawText(-300,30,"Oktobar");
    painter.drawText(-200,30,"Novembar");
    painter.drawText(-100,30,"Decembar");
    painter.drawText(0,30,"Januar");
    painter.drawText(100,30,"Februar");
    painter.drawText(200,30,"Mart");
    painter.drawText(300,30,"April");

    painter.drawLine(tacka_centar,tacka_x);
    painter.drawLine(tacka_centar,tacka_y);
    painter.drawLine(tacka_centar,tacka_x1);




    painter.drawLine(402,0,402-20,-20); //strelica x
    painter.drawLine(402,0,402-20,20);

    painter.drawLine(0,-302, 20,-302+20); //strelica y
    painter.drawLine(0,-302,-20,-302+20);

    QPen Zastava;
    Zastava.setWidth(1);
    painter.setPen(Zastava);


    QBrush cetka1(Qt::red);
    QRect Samoa2(-490,-340,300,150);
    painter.fillRect(Samoa2,cetka1);
    painter.drawRect(Samoa2);


    QBrush cetka(Qt::blue);
    QRect Samoa1(-490,-340,100,50);
    painter.fillRect(Samoa1,cetka);
    painter.drawRect(Samoa1);











}





