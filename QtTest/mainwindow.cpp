#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model = new QStandardItemModel;
    view = new QTableView;

    QIcon phoneIcon(":/images/images/phone.jpg");
    ui->label_7->setPixmap(phoneIcon.pixmap(18, 18));

    readData();

    view->horizontalHeader()->hide();
    view->verticalHeader()->hide();
    view->setModel(model);
    view->sortByColumn(2, Qt::AscendingOrder);
    view->setMinimumWidth(317);

    ui->comboBox->setEditable(false);
    ui->comboBox->setView(view);
    ui->comboBox->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readData()
{
    QFile file(":/data/countries/countries.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        int row = 0;
        while(!file.atEnd())
        {
            QString line = file.readLine();

            QStringList data = line.split(",", QString::SkipEmptyParts);

            for(int column = 0; column < 3; column++)
            {
                QStandardItem *itemCountryName = new QStandardItem(data.at(2));
                QStandardItem *itemCountryPhonePrefix = new QStandardItem(data.at(1));
                QStandardItem *iconItem = new QStandardItem();
                QString number = data[0].trimmed();
                QString path = ":/flags/countries/flags/" + number + ".jpg";

                if(column == 0)
                {
                    QIcon icon(path);
                    iconItem->setIcon(icon);

                    model->setItem(row, column, iconItem);
                }
                else if(column == 1)
                {
                    model->setItem(row, column, itemCountryName);
                }
                else
                {
                    model->setItem(row, column, itemCountryPhonePrefix);
                }
            }
            row++;
        }
        file.close();
    }
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Sending message", "The message is sent");
}

void MainWindow::on_textEdit_textChanged()
{
    int wordCount = ui->textEdit->toPlainText().length();

    ui->label_4->setText(QString::number(wordCount % 160) + "/" + QString::number(wordCount / 160 + 1));
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    QString countryPhonePrefix = ui->comboBox->model()->index(index, 2).data().toString().trimmed();

    ui->lineEdit->setText("+" + countryPhonePrefix);
}

void MainWindow::on_lineEdit_textChanged(const QString &/*arg1*/)
{
    int n = ui->comboBox->model()->rowCount();

    QString lineEditText = ui->lineEdit->text();

    for(int i = 0; i < n; i++)
    {
        QString countryPhonePrefix = "+" + ui->comboBox->model()->index(i, 2).data().toString().trimmed();

        if(!lineEditText.compare(countryPhonePrefix))
        {
            ui->comboBox->setCurrentIndex(i);
        }
    }

}
