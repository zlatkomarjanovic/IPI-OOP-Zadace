#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QColor>
#include <QPolygon>
#include <QPainterPath>
#include <QDebug>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    virtual void paintEvent(QPaintEvent *event);

private:
    Ui::Widget *ui;
    QGraphicsEllipseItem *elipsa;
    QGraphicsRectItem *kvadrat;
    QGraphicsPolygonItem *poligon;
    QGraphicsLineItem *linija;
    QGraphicsScene *scene;
};
#endif // WIDGET_H
