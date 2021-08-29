#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/Zlatko/Desktop/Zadaca_2-ZlatkoMarjanovic/Fakture.db");

    if (!mydb.open()){
        ui->statusbar->showMessage("Nije moguce otvoriti");
    }
    else
        ui->statusbar->showMessage("povezani ste na bazu");

}

MainWindow::~MainWindow()
{
    delete ui;
}

