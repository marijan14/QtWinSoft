import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Rectangle {
        width: 50
        height: 50
        color: "red"
        border.color: "black"
        border.width: 4
    }

    Rectangle {
        width: 200
        height: 200
        color: "red"
        border.color: "black"
        border.width: 4
        anchors.centerIn: parent

        Rectangle {
            width: parent.width / 2
            height: parent.height / 2
            radius: width * 0.5
            color: "green"
            border.color: "white"
            border.width: 4
            anchors.left: parent.left
            anchors.bottom: parent.bottom
        }
    }
}
