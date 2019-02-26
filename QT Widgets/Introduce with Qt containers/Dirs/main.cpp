#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mPath = "C:\\Users\\User-PC\\Desktop\\QT Programi\\Introduce with Qt containers";

    QDir mDir1(mPath);

    qDebug() << mDir1.exists();

    QDir mDir2;

    foreach(QFileInfo mItm, mDir2.drives())
    {
        qDebug() << mItm.absoluteFilePath();
    }

    QDir mDir3;
    if(!mDir3.exists())
    {
        mDir3.mkpath(mPath);
        qDebug() << "Created";
    } else {
        qDebug() << "Already exists";
    }

    QDir mDir4(mPath);
    foreach(QFileInfo mItm, mDir4.entryInfoList())
    {
        qDebug() << mItm.absoluteFilePath();
        if(mItm.isDir())
            qDebug() << "Dir: ";
        if(mItm.isFile())
            qDebug() << "File: ";
    }

    return a.exec();
}
