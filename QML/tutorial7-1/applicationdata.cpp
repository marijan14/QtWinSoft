#include "applicationdata.h"

ApplicationData::ApplicationData(QObject *parent) : QObject(parent)
{

}

QDateTime ApplicationData::getCurrentDateTime() const
{
    return QDateTime::currentDateTime();
}
