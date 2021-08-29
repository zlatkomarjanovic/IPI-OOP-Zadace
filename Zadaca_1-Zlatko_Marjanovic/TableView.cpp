#include "TableView.h"
#include "ui_TableView.h"


Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
    model= new QStringListModel(this);
    QStringList lista;
    lista << "Fahrudin Vejzovic" << "Sedin Saric"<< "Elvedin Muhic" << "Edin Bilal"
 << "Omer Rakovic" << "Bruno Seletkovic" << "Dzavid Ljubovci" << "Muhamed Sehic Hamic"
<< "Ferid Zeric" << "Ishak Dedic";



    model->setStringList(lista);



    ui->tableView->setModel(model);



    ui->tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed |QAbstractItemView::DoubleClicked);
}


Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::on_pushButton_2_clicked()
{
    //delete
     model->removeRows(ui->tableView->currentIndex().row(),1);

}
void Dialog4::on_pushButton_clicked()
{
    //add

    int row = model->rowCount();
    model->insertRows(row,1);

    QModelIndex index =model->index(row);


    ui->tableView->edit(index);


}

