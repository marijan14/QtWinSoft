#include <QCoreApplication>
#include <QVector>
#include <QDebug>
#include <iostream>

struct ToDoItem
{
    bool done;
    QString name;
};

class ToDoList : public QObject
{
    Q_OBJECT
public:
    explicit ToDoList(QObject *parent = nullptr);

    QVector<ToDoItem> items() const;

    bool setItems(int index, const ToDoItem &item);

    void print();

signals:
    void preItemAppended();
    void postItemAppended();

    void preItemRemoved(int index);
    void postItemRemoved();

public slots:

private:
    QVector<ToDoItem> mItems;
};

ToDoList::ToDoList(QObject *parent) : QObject(parent)
{
    mItems.append({ true, QStringLiteral("dsadsa") });
    mItems.append({ false, QStringLiteral("fsdf") });
    mItems.append({ false, QStringLiteral("fdsfds") });
    mItems.append({ false, QStringLiteral("qwe") });
    mItems.append({ false, QStringLiteral("goo") });
    mItems.append({ false, QStringLiteral("das") });
    mItems.append({ false, QStringLiteral("d") });
    mItems.append({ false, QStringLiteral("kop") });
    mItems.append({ false, QStringLiteral("asd") });
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
    if(item.done == oldItem.done && item.name == oldItem.name)
        return false;

    mItems[index] = item;
    return true;
}

void ToDoList::print()
{
    for(int i = 0; i < mItems.size(); i++)
        std::cout << mItems.at(i);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<ToDoList> mLists;

    ToDoList list;

    list.print();

    return a.exec();
}
