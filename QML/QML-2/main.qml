import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Rectangle {
        id: root
        width: 120
        height: 240
        color: "#4A4A4A"

        Image {
            id: triangle
            x: (parent.width - width) / 2
            y: 40
            source: "files/images/triangle.jpg"
        }

        Text {
            y: triangle.y + triangle.height + 20
            width: root.width
            color: 'white'
            horizontalAlignment: Text.AlignHCenter
            text: qsTr("Triangle")
        }
    }
}
