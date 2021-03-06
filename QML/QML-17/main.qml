import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Layouts 1.2

Window {
    visible: true
    width: 600
    height: 400

    Rectangle {
        id: root
        width: parent.width
        height: parent.height
        property int duration: 3000
        property Item ufo: ufo

        Image {
            anchors.fill: parent
            source: "files/images/ufo_background.png"
        }

        ClickableImageV3 {
            id: ufo
            x: 20
            y: root.height - height
            text: "ufo"
            source: "files/images/ufo.png"
            onClicked: anim.restart()
        }

        ParallelAnimation {
            id: anim
            NumberAnimation {
                target: ufo
                properties: "y"
                to: 20
                duration: root.duration
            }

            NumberAnimation {
                target: ufo
                properties: "x"
                to: 160
                duration: root.duration
            }
        }
    }
}
