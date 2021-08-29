#include "TreeView.h"
#include "ui_TreeView.h"
#include <QtCore>
#include <QtGui>
#include <QStringListModel>

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);

    model=new QStringListModel(this);

    QStringList lista;
    lista << "Fahrudin Vejzovic" << "Sedin Saric"<< "Elvedin Muhic" << "Edin Bilal" << "Omer Rakovic" << "Bruno Seletkovic" << "Dzavid Ljubovci" << "Muhamed Sehic Hamic" << "Ferid Zeric" << "Ishak Dedic";


    model->setStringList(lista);



    ui->treeView->setModel(model);


    ui->treeView->setEditTriggers(QAbstractItemView::AnyKeyPressed |QAbstractItemView::DoubleClicked);


}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_clicked()
{
    //add
    int row = model->rowCount();
    model->insertRows(row,1);

    QModelIndex index =model->index(row);



    ui->treeView->edit(index);

}


void Dialog3::on_pushButton_2_clicked()
{
    //delete
    model->removeRows(ui->treeView->currentIndex().row(),1);


}

