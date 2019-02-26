#include <QGuiApplication>
#include <qqmlengine.h>
#include <qqmlcontext.h>
#include <qqml.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>
#include "animalmodel.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    AnimalModel model;
    model.addAnimal(Animal("Wolf", "Medium"));
    model.addAnimal(Animal("Polar bear", "Large"));
    model.addAnimal(Animal("Quoll", "Small"));

    QQuickView view;
    view.setResizeMode(QQuickView::SizeViewToRootObject);

    QQmlContext *ctxt = view.rootContext();
    ctxt->setContextProperty("myModel", &model);

    view.setSource(QUrl("qrc:main.qml"));
    view.show();

    return app.exec();
}
