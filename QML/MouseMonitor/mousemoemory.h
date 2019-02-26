#ifndef MOUSEMOEMORY_H
#define MOUSEMOEMORY_H

#include <QObject>
#include <QDebug>
#include <QPoint>

class MouseMoemory : public QObject
{
    Q_OBJECT
public:
    explicit MouseMoemory(QObject *parent = nullptr);

    Q_INVOKABLE void test();
    Q_INVOKABLE void clear();
    Q_INVOKABLE void save();
    Q_INVOKABLE void add(double x, double y);
    Q_INVOKABLE void add(QPointF point);

signals:

public slots:
};

#endif // MOUSEMOEMORY_H
