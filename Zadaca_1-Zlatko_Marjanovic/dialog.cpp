#include "dialog.h"
#include "ui_dialog.h"
#include "ListView.h"
#include "TreeView.h"
#include "TableView.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    model=new QStringListModel(this);

    QStringList lista;

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_2_clicked()
{
    //ListView

    //Dialog2 dialog2;
    //dialog2.setModal(true);
    //dialog2.exec();

    dialog2 =new Dialog2(this);
    dialog2->show();
}


void Dialog::on_pushButton_3_clicked()
{
    //TreeView


    //Dialog3 dialog3;
    //dialog3.setModal(true);
    //dialog3.exec();

    dialog3 =new Dialog3(this);
    dialog3->show();

}


void Dialog::on_pushButton_clicked()
{
    //TableView

    //Dialog4 dialog4;
    //dialog4.setModal(true);
    //dialog4.exec();

    dialog4 =new Dialog4(this);
    dialog4->show();
}

