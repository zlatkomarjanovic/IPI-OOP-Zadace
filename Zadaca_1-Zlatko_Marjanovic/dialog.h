#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <ListView.h>
#include <TreeView.h>
#include <TableView.h>
#include <QStringListModel>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    Dialog2 *dialog2;
    Dialog3 *dialog3;
    Dialog4 *dialog4;
    QStringListModel *model;



};
#endif // DIALOG_H
