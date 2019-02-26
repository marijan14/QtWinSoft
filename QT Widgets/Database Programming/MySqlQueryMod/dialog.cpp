#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("user\\sqlexpress");
    db.setDatabaseName("mydsn32");

    db.open();

    this->model = new QSqlQueryModel();
    model->setQuery("SELECT [ID],[FirstName],[LastName] FROM [dbo].[People]");

    ui->tableView->setModel(model);
}

Dialog::~Dialog()
{
    delete ui;
    db.close();
}
