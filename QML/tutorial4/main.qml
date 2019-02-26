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

        focus: true
        Keys.onPressed: {
            if(event.key === Qt.Key_Return) {
                color = "blue"
                event.accepted = true
            }
        }
    }
}
