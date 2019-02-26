import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Rectangle {
        id: button
        x: 12
        y: 12
        width: 116
        height: 26
        color: "lightsteelblue"
        border.color: "slategrey"

        Text {
            anchors.centerIn: parent
            text: qsTr("Start")
        }

        MouseArea {
            anchors.fill: parent
            onClicked: status.text = "Button clicked!"
        }
    }

    Text {
        id: status
        text: qsTr("waiting ...")
        x: 12
        y: 76
        width: 116
        height: 26
        horizontalAlignment: Text.AlignHCenter
    }
}
