#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qqml.h>
#include <qqmlengine.h>
#include <qqmlcontext.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>
#include "dataobject.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QList<QObject*> dataList;
    dataList.append(new DataObject("Item 1", "red"));
    dataList.append(new DataObject("Item 2", "green"));
    dataList.append(new DataObject("Item 3", "blue"));
    dataList.append(new DataObject("Item 4", "yellow"));

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);

    QQmlContext *ctxt = view.rootContext();
    ctxt->setContextProperty("myModel", QVariant::fromValue(dataList));
    view.setSource(QUrl("qrc:/main.qml"));
    view.show();

    return app.exec();
}
