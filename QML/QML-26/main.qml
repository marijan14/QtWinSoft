import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Background {
        width: 480
        height: 80

        ListView {
            anchors.fill: parent
            anchors.margins: 20
            spacing: 4
            clip: true
            model: 100
            orientation: ListView.Horizontal
            delegate: numberDelegate
        }

        Component {
            id: numberDelegate
            GreenBox {
                width: 40
                height: 40
                text: index
            }
        }
    }
}
