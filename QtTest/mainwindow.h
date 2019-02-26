#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QTableView>
#include <QMessageBox>
#include <QFile>
#include <QStandardItemModel>
#include <QHeaderView>

namespace Ui {
class MainWindow;
}

struct Country {
    QString flag, fullName, prefix, shortName;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void readData();

private slots:
    void on_pushButton_clicked();

    void on_textEdit_textChanged();

    void on_comboBox_currentIndexChanged(int index);

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QList<Country> mCountries;
    QStandardItemModel *model;
    QTableView *view;
};

#endif // MAINWINDOW_H
