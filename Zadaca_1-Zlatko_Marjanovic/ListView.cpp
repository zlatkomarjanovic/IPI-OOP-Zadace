#include "ListView.h"
#include "ui_ListView.h"
#include <QString>
#include <QtCore>
#include <QtGui>

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);

    model=new QStringListModel(this);

    QStringList lista;
    lista << "Fahrudin Vejzovic" << "Sedin Saric"<< "Elvedin Muhic" << "Edin Bilal" << "Omer Rakovic" << "Bruno Seletkovic" << "Dzavid Ljubovci" << "Muhamed Sehic Hamic" << "Ferid Zeric" << "Ishak Dedic";

    model->setStringList(lista);



    ui->listView->setModel(model);


    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed |QAbstractItemView::DoubleClicked);
}

Dialog2::~Dialog2()
{
    delete ui;
}










void Dialog2::on_pushButton_clicked()
{
     //add
      int row = model->rowCount();
      model->insertRows(row,1);

      QModelIndex index =model->index(row);


      ui->listView->edit(index);
}


void Dialog2::on_pushButton_2_clicked()
{
    //delete

    model->removeRows(ui->listView->currentIndex().row(),1);

}

