#include "todolists.h"

ToDoLists::ToDoLists(QObject *parent) : QObject(parent)
{
}

void ToDoLists::setCurrentList(int index)
{
    context->setContextProperty(QStringLiteral("toDoList"), mLists[index]);
}

QString ToDoLists::getName()
{
    return name;
}

int ToDoLists::countItems(int index)
{
    QVector<ToDoItem> v = mLists[index]->items();

    return std::count_if(v.cbegin(), v.cend(), [](const ToDoItem &toDoItem) {
        return toDoItem.done == false;
    });
}

void ToDoLists::setContext(QQmlContext *value)
{
    context = value;
}

QVector<ToDoList*> ToDoLists::lists() const
{
    return mLists;
}

bool ToDoLists::setLists(int index, ToDoList *list)
{
    if(index < 0 || index >= mLists.size())
        return false;

    mLists[index] = list;

    return true;
}


void ToDoLists::addList(QString listName)
{
    emit preItemAppended();

    ToDoList *obj = new ToDoList();
    mLists.append(obj);
    name = listName;

    emit postItemAppended();
}

void ToDoLists::deleteList()
{
    for(int i = 0; i < mLists.size(); i++)
    {
        emit preItemRemoved(i);

        mLists.removeAt(i);

        emit postItemRemoved();
    }
}
