#include "mousemoemory.h"

MouseMoemory::MouseMoemory(QObject *parent) : QObject(parent)
{

}

void MouseMoemory::test()
{
    qDebug() << "Hello from C++";
}

void MouseMoemory::clear()
{
    qDebug() << "Clear the data";
}

void MouseMoemory::save()
{
    qDebug() << "Save the data";
}

void MouseMoemory::add(double x, double y)
{
    QPoint p(x, y);
    qDebug() << "Adding " << p;
}

void MouseMoemory::add(QPointF point)
{
    qDebug() << "Adding Float" << point;
}
