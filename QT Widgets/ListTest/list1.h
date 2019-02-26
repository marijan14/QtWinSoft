#ifndef LIST1_H
#define LIST1_H

#include <QObject>
#include <QVector>

struct ToDoItem
{
    bool done;
    QString description;
};

class List1 : public QObject
{
    Q_OBJECT
public:
    explicit List1(QObject *parent = nullptr);

    QVector<ToDoItem> items() const;

    bool setItems(int index, const ToDoItem &item);

signals:

public slots:

private:
    QVector<ToDoItem> mItems;
};

#endif // LIST1_H
