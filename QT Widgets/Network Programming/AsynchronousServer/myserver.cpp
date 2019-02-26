#include "myserver.h"

MyServer::MyServer(QObject *parent) : QTcpServer(parent)
{

}

void MyServer::startServer()
{
    if(this->listen(QHostAddress::Any, 1234))
    {
        qDebug() << "Server started";
    }
    else
    {
        qDebug() << "Server not started";
    }
}

void MyServer::incomingConnection(int handle)
{
    MyClient *client = new MyClient(this);
    client->SetSocket(handle);
}
