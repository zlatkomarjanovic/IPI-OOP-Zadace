#ifndef TREEVIEW_H
#define TREEVIEW_H

#include <QDialog>
#include <QStringListModel>
#include <QTreeView>



namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT



public:
    explicit Dialog3(QWidget *parent = nullptr);
    ~Dialog3();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog3 *ui;
    QStringListModel *model;

};

#endif // TREEVIEW_H
