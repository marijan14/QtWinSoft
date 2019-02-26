#ifndef TODOLISTS_H
#define TODOLISTS_H

#include <QObject>
#include <QQmlContext>
#include "todolist.h"


class ToDoLists : public QObject
{
    Q_OBJECT
public:
    explicit ToDoLists(QObject *parent = nullptr);

    void setContext(QQmlContext *value);

    QVector<ToDoList*> lists() const;

    bool setLists(int index, ToDoList *list);

signals:
    void preItemAppended();
    void postItemAppended();

    void preItemRemoved(int index);
    void postItemRemoved();

public slots:
    void addList(QString listName);
    void deleteList();
    void setCurrentList(int index);
    QString getName();
    int countItems(int index);

private:
    QString name;
    QVector<ToDoList*> mLists;
    QQmlContext *context;
};

#endif // TODOLISTS_H
