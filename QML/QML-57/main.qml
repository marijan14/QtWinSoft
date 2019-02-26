import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 200
    height: 250

    Item {
        width: parent.width
        height: parent.height

        Component {
            id: itemDelegate
            Text { text: "I am item number: " + index }
        }

        ListView {
            delegate: itemDelegate
            anchors.fill: parent
            model: 5
        }
    }
}
