#include <QCoreApplication>
#include "myudp.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyUDP server, client;
    client.SayHello();

    return a.exec();
}
