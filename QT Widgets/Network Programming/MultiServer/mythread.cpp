#include "mythread.h"

MyThread::MyThread(int ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
}

void MyThread::run()
{
    qDebug() << socketDescriptor << " Strating Thread";

    socket = new QTcpSocket();

    if(!socket->setSocketDescriptor(this->socketDescriptor))
    {
        emit error(socket->error());
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);

    qDebug() << socketDescriptor << " Client Connected";

    exec();
}


void MyThread::readyRead()
{
    QByteArray data = socket->readAll();

    qDebug() << socketDescriptor << " Data in: " << data;

    socket->write(data);
}

void MyThread::disconnected()
{
    qDebug() << socketDescriptor << " Disconnected: ";

    socket->deleteLater();
    exit(0);
}
