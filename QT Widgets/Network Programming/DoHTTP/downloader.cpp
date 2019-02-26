#include "downloader.h"

downloader::downloader(QObject *parent) : QObject(parent)
{

}

void downloader::doDownload()
{
    manager = new QNetworkAccessManager(this);

    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));

    manager->get(QNetworkRequest(QUrl("https://bogotobogo.com")));
}

void downloader::replyFinished(QNetworkReply *reply)
{
    if(reply->error())
    {
        qDebug() << "Error!";
        qDebug() << reply->errorString();
    }
    else
    {
        qDebug() << reply->header(QNetworkRequest::ContentTypeHeader).toString();
        qDebug() << reply->header(QNetworkRequest::LastModifiedHeader).toString();
        qDebug() << reply->header(QNetworkRequest::ContentLengthHeader).toString();
        qDebug() << reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        qDebug() << reply->attribute(QNetworkRequest::HttpReasonPhraseAttribute).toString();

        QFile *file = new QFile("C:/Users/User-PC/Desktop/QT Programi/Network Programming/DoHTTP/downloaded.txt");
        if(file->open(QFile::Append))
        {
            file->write(reply->readAll());
            file->flush();
            file->close();
        }
        delete file;
    }
    reply->deleteLater();
}
