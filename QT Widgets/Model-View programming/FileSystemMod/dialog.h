#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFileSystemModel>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::Dialog *ui;
    QFileSystemModel *dirModel;
    QFileSystemModel *fileModel;
};

#endif // DIALOG_H
