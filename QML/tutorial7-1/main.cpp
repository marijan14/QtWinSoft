#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "applicationdata.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
/*
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;
*/
    QQuickView view;
    ApplicationData data;

    view.rootContext()->setContextProperty("applicationData", &data);
    view.setSource(QUrl::fromLocalFile("MyItem.qml"));
    view.show();

    return app.exec();
}
