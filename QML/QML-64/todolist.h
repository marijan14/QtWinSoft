#ifndef TODOLIST_H
#define TODOLIST_H

#include <QObject>
#include <QVector>
#include <QQuickView>
#include <QQuickItem>

struct ToDoItem
{
    bool done;
    QString description;
};

class ToDoList : public QObject
{
    Q_OBJECT
public:
    explicit ToDoList(QObject *parent = nullptr);

    QVector<ToDoItem> items() const;

    bool setItems(int index, const ToDoItem &item);

    QString getListName() const;

    void setListName(const QString &value);

signals:
    void preItemAppended();
    void postItemAppended();

    void preItemRemoved(int index);
    void postItemRemoved();

public slots:
    void addItems(QString itemName);
    void moveToCompleted();
    void moveToUncompleted();

private:
    QString listName;
    QVector<ToDoItem> mItems;
    QVector<ToDoItem> mItemsCompleted;
    QVector<ToDoItem> mItemsUncompleted;
};

#endif // TODOLIST_H
