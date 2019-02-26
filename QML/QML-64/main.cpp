#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQmlComponent>

#include "todomodel.h"
#include "todolists.h"
#include "taskmodel.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<ToDoModel>("ToDo", 1, 0, "ToDoModel");
    qmlRegisterType<TaskModel>("Task", 1, 0, "TaskModel");
    qmlRegisterUncreatableType<ToDoList>("Task", 1, 0, "ToDoList", QStringLiteral("ToDoList should not be created in QML"));
    qmlRegisterUncreatableType<ToDoLists>("ToDo", 1, 0, "ToDoLists", QStringLiteral("ToDoList should not be created in QML"));

    ToDoLists toDoLists;

    QQmlApplicationEngine engine;

    toDoLists.setContext(engine.rootContext());
    engine.rootContext()->setContextProperty(QStringLiteral("toDoLists"), &toDoLists);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
