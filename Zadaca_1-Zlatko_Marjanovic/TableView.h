#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include <QDialog>
#include <QTableView>
#include <QStringListModel>

namespace Ui {
class Dialog4;
}

class Dialog4 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog4(QWidget *parent = nullptr);
    ~Dialog4();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog4 *ui;
    QStringListModel *model;

};

#endif // TABLEVIEW_H
