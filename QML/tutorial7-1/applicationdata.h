#ifndef APPLICATIONDATA_H
#define APPLICATIONDATA_H

#include <QObject>
#include <QDateTime>
#include <QQuickView>
#include <QQmlContext>

class ApplicationData : public QObject
{
    Q_OBJECT
public:
    explicit ApplicationData(QObject *parent = nullptr);

    Q_INVOKABLE QDateTime getCurrentDateTime() const;

signals:

public slots:
};

#endif // APPLICATIONDATA_H
