#include <QCoreApplication>
#include "sockettest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    SocketTest socketTest;
    socketTest.Connect();

    return a.exec();
}
