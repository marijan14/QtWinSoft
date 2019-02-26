import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Background {
        width: 220
        height: 300

        GridView {
            id: view
            anchors.fill: parent
            anchors.margins: 20
            clip: true
            model: 100
            cellWidth: 45
            cellHeight: 45
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
