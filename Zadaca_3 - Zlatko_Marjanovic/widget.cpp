#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{

    //Pozadina auta
    QPainter painter(this);
    QBrush cetka(Qt::yellow);
    QRect Auto(0,0,1000,1000);
    painter.fillRect(Auto,cetka);
    painter.drawRect(Auto);





    //crtanje šašije autića
    QPainter painter1(this);
    QPen olovka;
    olovka.setWidth(3);
    painter.setPen(olovka);

    QPainterPath spath;
    QPolygon poligon2;
    spath.moveTo(600, 130);
        spath.arcTo(QRect(300,40,200,180),0,180);
        spath.moveTo(300, 130);
        spath.lineTo(245, 135);
        spath.lineTo(240, 200);
        spath.lineTo(290, 197);

        spath.arcTo(QRect(290,155,90,90), 180, -180);
        spath.lineTo(380,205);
        spath.lineTo(470,205);

        spath.arcTo(QRect(470,155,90,90), 180, -180);
        spath.lineTo(620,200);
        spath.lineTo(600,130);

    painter.drawPath(spath);

    //farbanje šašije autića
    QBrush fillbrush2;
    fillbrush2.setColor(Qt::red);
    fillbrush2.setStyle(Qt::SolidPattern);

    QPainterPath path;
    path.addPolygon(poligon2);


    painter.drawPolygon(poligon2);
    painter.fillPath(spath,fillbrush2);

    QPainterPath path1;


    //crtanje prozora autića
    QPolygon poligon;
    QPainterPath prozor1;
    prozor1.moveTo(310,130);
    prozor1.arcTo(QRectF(310,50,182,170),175,-81);
    prozor1.lineTo(395,130);
    prozor1.lineTo(310,130);
    spath.lineTo(470,205);

    //farbanje prozora autića
    QBrush fillbrush;
    fillbrush.setColor(Qt::blue);
    fillbrush.setStyle(Qt::SolidPattern);

    QPainterPath path3;
    path.addPolygon(poligon);


    painter.drawPolygon(poligon);
    painter.fillPath(prozor1,fillbrush);



    QPainterPath prozor2;
    prozor2.moveTo(405,130);
    prozor2.arcTo(QRectF(310,50,182,170),3,84);
    prozor2.lineTo(405,130);
    painter.drawPath(prozor2);
    QBrush fillbrush1;
    fillbrush.setColor(Qt::blue);
    fillbrush.setStyle(Qt::SolidPattern);

    QPainterPath path2;
    path.addPolygon(poligon);


    painter.drawPolygon(poligon);
    painter.fillPath(prozor2,fillbrush);




    //crtanje i farbanje točkova autića
    QPainter krug(this);
    krug.setBrush(Qt::gray);
    krug.drawEllipse(300,165,70,70);
    krug.drawEllipse(480,165,70,70);
    krug.setBrush(Qt::black);
    krug.drawEllipse(310,175,51,51);
    krug.drawEllipse(490,175,51,51);















}
