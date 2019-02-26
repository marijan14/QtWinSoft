import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Image {
        id: root
        width: parent.width
        height: parent.height
        source: "files/images/background.png"

        Image {
            id: pole
            source: "files/images/pole.png"
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom: root.bottom
        }

        Image {
            id: wheel
            source: "files/images/pinwheel.png"
            anchors.centerIn: root
            Behavior on rotation {
                NumberAnimation { duration: 250 }
            }
        }

        MouseArea {
            anchors.fill: root
            onClicked: wheel.rotation += 90
        }
    }
}
