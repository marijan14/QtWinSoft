import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    ListModel {
        id: nameModel

        ListElement { name: "Alice"; team: "Crypto" }
        ListElement { name: "Bob"; team: "Crypto" }
        ListElement { name: "Jane"; team: "QA" }
        ListElement { name: "Victor"; team: "QA" }
        ListElement { name: "Wendy"; team: "Graphics" }
    }

    Component {
        id: nameDelegate

        Text {
            text: name
            font.pixelSize: 24
            anchors.left: parent.left
            anchors.leftMargin: 2
        }
    }

    ListView {
        anchors.fill: parent
        model: nameModel
        delegate: nameDelegate
        focus: true

        highlight: Rectangle {
            color: "lightblue"
            width: parent.width
        }

        section {
            property: "team"
            criteria: ViewSection.FullString

            delegate: Rectangle {
                color: "#b0dfb0"
                width: parent.width
                height: childrenRect.height + 4

                Text {
                    anchors.horizontalCenter: parent.horizontalCenter
                    font.pixelSize: 16
                    font.bold: true
                    text: section
                }
            }
        }
    }
}
