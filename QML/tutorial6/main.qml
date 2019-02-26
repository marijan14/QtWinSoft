import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Column {
        Button { width: 50; height: 50 }
        Button { width: 50; height: 50; x: 50; color: "blue" }
        Button { width: 50; height: 50; radius: 8 }
    }
}
