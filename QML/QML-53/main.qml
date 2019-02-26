import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    ListModel {
        id: petModel
        ListElement { type: "Cat" }
        ListElement { type: "Dog" }
        ListElement { type: "Mouse" }
        ListElement { type: "Rabbit" }
        ListElement { type: "Horse" }
    }

    Component {
        id: petDelegate
        Text {
            id: label
            font.pixelSize: 24
            text: {
                if(index == 0)
                    label.text = type + " (dafault)"
                else
                    text: type
            }
        }
    }

    ListView {
        anchors.fill: parent
        model: petModel
        delegate: petDelegate
    }
}
