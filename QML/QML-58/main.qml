import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 200
    height: 250

    Rectangle {
        width: parent.width
        height: parent.height

        Text {
            id: myText
            text: qsTr("Hello")
            color: "#dd44ee"
        }

        Component {
            id: myDelegate
            Text { text: model.color }
        }

        ListView {
            anchors.fill: parent
            anchors.topMargin: 30
            model: myText
            delegate: myDelegate
        }
    }
}
