import QtQuick 2.5
import QtQuick.Window 2.2

Loader {
    id: loader
    focus: true
    source: "main.qml"
    onLoaded: {
        //setSize(loader.item.width, loader.item.height);
        //shootWithDelay(3000);
    }
}
