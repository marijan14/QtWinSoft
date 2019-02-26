#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile file("C:/Users/User-PC/Desktop/QT Programi/FillTableWithDataFromTextFile/countries.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while(!file.atEnd())
    {
        QByteArray line = file.readLine();
        process_line(line);
    }
}

void MainWindow::process_line(QString line)
{
    QStringList data = line.split(",", QString::SkipEmptyParts);
}

MainWindow::~MainWindow()
{
    delete ui;
}
