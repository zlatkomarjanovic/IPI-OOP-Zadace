#ifndef LISTVIEW_H
#define LISTVIEW_H

#include <QDialog>
#include <QListView>
#include <QStringListModel>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = nullptr);
    ~Dialog2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog2 *ui;
    QStringListModel *model;

};

#endif // LISTVIEW_H
