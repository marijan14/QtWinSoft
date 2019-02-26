import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Edit")
    id: editWindow

    Rectangle {
        id: head
        width: parent.width
        height: 80
        color: "blue"

        Text {
            x: 20
            y: 20
            text: qsTr("<b>Edit this list</b>")
            font.pixelSize: 24
        }

        Text {
            x: 20
            y: 50
            text: qsTr("Cancel")
            color: "#f00"
            font.underline: true

            MouseArea {
                anchors.fill: parent
                onClicked: editWindow.close()
            }
        }

        Text {
            x: 60
            y: 50
            text: qsTr("|")
        }

        Text {
            x: 70
            y: 50
            text: qsTr("Delete this list")
            color: "#f00"
            font.underline: true

            MouseArea {
                anchors.fill: parent
                onClicked: toDoLists.deleteList()
            }
        }
    }

    Rectangle {
        id: body
        width: parent.width
        height: parent.height - head.height
        anchors.top: head.bottom
        color: "red"

        Text {
            id: txtTitle
            x: 20
            y: 20
            text: qsTr("TITLE")
            font.pixelSize: 10
        }

        TextField {
            width: 550
            x: 20
            anchors.top: txtTitle.bottom
            id: listTitle
            text: toDoLists.getName()
        }

    }
}
