#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    myDelegate = new Delegate(this);
    model = new QStandardItemModel(4, 2, this);

    for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            QModelIndex index = model->index(i, j, QModelIndex());
            model->setData(index, 0);
        }
    }

    ui->tableView->setModel(model);
    ui->tableView->setItemDelegate(myDelegate);
}

Dialog::~Dialog()
{
    delete ui;
}
