#ifndef DATAOBJECT_H
#define DATAOBJECT_H

#include <QObject>

class DataObject : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString color READ color WRITE setColor NOTIFY colorChanged)

public:
    explicit DataObject(QObject *parent = nullptr);
    DataObject(const QString &name, const QString &color, QObject *parent = nullptr);

    QString name() const;
    void setName(const QString &name);

    QString color() const;
    void setColor(const QString &color);

signals:
    void nameChanged();
    void colorChanged();

public slots:

private:
    QString m_name, m_color;
};

#endif // DATAOBJECT_H
