#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include <QPainter>
#include <QGraphicsLineItem>
#include <QGraphicsScene>
#include <QtGui>
#include <QPolygon>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;



protected:
    void paintEvent(QPaintEvent *e);
    QGraphicsLineItem *line;
    QGraphicsEllipseItem *ellipse;
    QGraphicsTextItem *text;
    QGraphicsScene *scene;
    QGraphicsPolygonItem *polygon;

};
#endif // DIALOG_H
