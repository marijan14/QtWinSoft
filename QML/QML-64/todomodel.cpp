#include "todomodel.h"
#include "todolists.h"

ToDoModel::ToDoModel(QObject *parent)
    : QAbstractListModel(parent), mLists(nullptr)
{
}

int ToDoModel::rowCount(const QModelIndex &parent) const
{
    // For list models only the root node (an invalid parent) should return the list's size. For all
    // other (valid) parents, rowCount() should return 0 so that it does not become a tree model.
    if (parent.isValid() || !mLists)
        return 0;

    return mLists->lists().size();
}

QVariant ToDoModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid() || !mLists)
        return QVariant();

    const ToDoList *list = mLists->lists().at(index.row());

    QString str = list->getListName();
    //return QVariant(listName);

    return QVariant(str);
}

bool ToDoModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if(!mLists)
        return false;

    ToDoList *list = mLists->lists().at(index.row());

    list->setListName(value.toString());

    if (mLists->setLists(index.row(), list)) {
        emit dataChanged(index, index, QVector<int>() << role);
        return true;
    }

    return false;
}

Qt::ItemFlags ToDoModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::NoItemFlags;

    return Qt::ItemIsEditable;
}

ToDoLists *ToDoModel::list() const
{
    return mLists;
}

void ToDoModel::setList(ToDoLists *list)
{
    beginResetModel();

    if(mLists)
        mLists->disconnect(this);

    mLists = list;

    if(mLists)
    {
        connect(mLists, &ToDoLists::preItemAppended, this, [=]() {
            const int index = mLists->lists().size();
            beginInsertRows(QModelIndex(), index, index);
        });
        connect(mLists, &ToDoLists::postItemAppended, this, [=]() {
            endInsertRows();
        });
        connect(mLists, &ToDoLists::preItemRemoved, this, [=](int index) {
            beginRemoveRows(QModelIndex(), index, index);
        });
        connect(mLists, &ToDoLists::postItemRemoved, this, [=]() {
            endRemoveRows();
        });
    }

    endResetModel();
}
