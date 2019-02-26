#include <QCoreApplication>
#include <QDebug>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list;

    for(int i = 0; i < 10; i++)
    {
        list.append(i);
    }

    QListIterator<int> iter(list);

    iter.toBack();

    while (iter.hasPrevious()) {
        qDebug() << iter.previous();
        if(iter.hasPrevious()) {
            qDebug() << "next..." << iter.peekPrevious();
        }
    }

    return a.exec();
}
