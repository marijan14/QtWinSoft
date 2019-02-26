import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle {
        width: parent.width
        height: parent.height
        color: "red"

        Text {
            anchors.centerIn: parent
            text: qsTr("Hello World!")
        }

        MouseArea {
            anchors.fill: parent
            onClicked: parent.color = "blue"
        }
    }
}
