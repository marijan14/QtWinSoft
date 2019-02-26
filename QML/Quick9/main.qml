import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 500
    height: 500
    id: root

    property bool running: false

    Rectangle {
        id: body
        width: root.width
        height: root.height
        anchors.centerIn: root

        Image {
            id: background
            source: "files/images/spiral.png"
            anchors.centerIn: body
            fillMode: Image.PreserveAspectFit

            RotationAnimation on rotation {
                from: 0
                to: -360
                duration: 3000
                running: root.running
                loops: Animation.Infinite
            }
        }

        Image {
            id: blue
            source: "files/images/btn_white_down.png"
            fillMode: Image.PreserveAspectFit
            anchors.centerIn: background
            width: 150
            opacity: 0.5
        }

        MouseArea {
            anchors.fill: background
            onClicked: root.running = true
        }
    }
}
