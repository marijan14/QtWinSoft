#include "todolist.h"

ToDoList::ToDoList(QObject *parent) : QObject(parent)
{
}

QVector<ToDoItem> ToDoList::items() const
{
    return mItems;
}

bool ToDoList::setItems(int index, const ToDoItem &item)
{
    if(index < 0 || index >= mItems.size())
        return false;

    const ToDoItem &oldItem = mItems.at(index);
    if(item.done == oldItem.done && item.description == oldItem.description)
        return false;

    mItems[index] = item;
    return true;
}

QString ToDoList::getListName() const
{
    return listName;
}

void ToDoList::setListName(const QString &value)
{
    listName = value;
}

void ToDoList::addItems(QString itemName)
{
    emit preItemAppended();

    ToDoItem item;
    item.done = false;
    item.description = itemName;
    mItems.append(item);

    emit postItemAppended();
}

void ToDoList::moveToCompleted()
{
    for (int i = 0; i < mItems.size(); i++)
    {
        if(mItems.at(i).done)
        {
            emit preItemRemoved(i);

            mItems.removeAt(i);
            mItemsCompleted.append(mItems.at(i));

            emit postItemRemoved();
        }
        else
        {
            i++;
        }
    }
}

void ToDoList::moveToUncompleted()
{
//    for (int i = 0; i < mItems.size(); i++)
//    {

//    }
}
