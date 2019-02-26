import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Animation")

    Rectangle {
        width: parent.width
        height: parent.height
        color: "lightgray"
        property int animatedValue: 0

        SequentialAnimation on animatedValue {
            loops: Animation.Infinite
            PropertyAnimation { to: 150; duration: 1000 }
            PropertyAnimation { to: 0; duration: 1000 }
        }

        Text {
            anchors.centerIn: parent
            text: parent.animatedValue
            font.pixelSize: 35
            font.bold: true
        }
    }
}
