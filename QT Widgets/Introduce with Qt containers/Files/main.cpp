#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Write(QString filename)
{
    QFile mFile(filename);

    if(!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "could not open file for writing";
        return;
    }

    QTextStream out(&mFile);
    out << "Hello World";

    mFile.flush();
    mFile.close();
}

void Read(QString filename)
{
    QFile mFile(filename);

    if(!mFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "could not open file for writing";
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();

    qDebug() << mText;

    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString mFilename = "C:/Users/User-PC/Desktop/QT Programi/Introduce with Qt containers/Files/myfile.txt";

    Write(mFilename);
    Read(mFilename);

    return a.exec();
}
