import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Image {
        id: root
        source: "files/images/background.jpg"
        property int padding: 40
        property int duration: 4000
        property bool running: false

        Image {
            id: box
            x: root.padding;
            y: (root.height - height) / 2
            source: "files/images/box_green.png"

            NumberAnimation on x {
                to: root.width - box.width - root.padding
                duration: root.duration
                running: root.running
            }

            RotationAnimation on rotation {
                to: 360
                duration: root.duration
                running: root.running
            }
        }

        MouseArea {
            anchors.fill: parent
            onClicked: root.running = true
        }
    }
}
