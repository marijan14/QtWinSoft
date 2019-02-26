#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qqmlengine.h>
#include <qqmlcontext.h>
#include <qqml.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QStringList dataList;
    dataList.append("Item 1");
    dataList.append("Item 2");
    dataList.append("Item 3");
    dataList.append("Item 4");

    QQuickView view;
    QQmlContext *ctx = view.rootContext();
    ctx->setContextProperty("myModel", QVariant::fromValue(dataList));
    view.setSource(QUrl("qrc:/main.qml"));
    view.show();

    return app.exec();
}
