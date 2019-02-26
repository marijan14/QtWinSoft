#include <QCoreApplication>
#include <QtSql>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString serverName = "user\\sqlexpress";
    QString dbName = "master";
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setConnectOptions();
    QString dsn = QString("DRIVER={SQL SERVER};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;")
            .arg(serverName).arg(dbName);

    db.setDatabaseName(dsn);

    if(db.open())
    {
        qDebug() << "Opened!";

        QSqlQuery query;
        QString sQuery = "INSERT INTO dbo.People ([FirstName], [LastName]) VALUES(:first,:last)";

        query.prepare(sQuery);

        query.bindValue(":first", "Heather");
        query.bindValue(":last", "Cairns");

        if(query.exec())
        {
            qDebug() << "Record Inserted";
        }

        qDebug() << "Closing...";
        db.close();
    }
    else
    {
        qDebug() << "Error = " << db.lastError().text();
    }

    return a.exec();
}
