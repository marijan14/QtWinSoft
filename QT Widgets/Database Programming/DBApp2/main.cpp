#include <QCoreApplication>
#include <QtSql>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("user\\sqlexpress");
    db.setDatabaseName("mydsn32");

    if(db.open())
    {
        qDebug() << "Opened";
        db.close();
    }
    else
    {
        qDebug() << db.lastError().text();
    }

    return a.exec();
}
