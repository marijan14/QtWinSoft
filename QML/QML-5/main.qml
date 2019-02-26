import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Rectangle {
        id: rect1
        x: 12
        y: 12
        width: 76
        height: 96
        color: "lightsteelblue"
    }

    Rectangle {
        id: rect2
        x: 112
        y: 12
        width: 76
        height: 96
        border.color: "lightsteelblue"
        border.width: 4
        radius: 8
    }
}
