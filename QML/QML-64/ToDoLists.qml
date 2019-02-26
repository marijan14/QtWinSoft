import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import ToDo 1.0

ListView {
    width: 250
    height: 250
    clip: true
    anchors.fill: parent
    spacing: 10

    model: ToDoModel {
        list: toDoLists
    }

    delegate: RowLayout {
        width: parent.width

        Image {
            id: name
            source: {
                "files/images/open-2.gif"
            }
        }

        Text {
            text: toDoLists.getName() + " — " + toDoLists.countItems(index) + " left"
            Layout.fillWidth: true
            font.pixelSize: 16
            font.underline: true
            color: "blue"

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    toDoLists.setCurrentList(index)
                    ld2.source = "CurrentOpenedList.qml"
                }
            }

            Loader {
                id: ld2
                anchors.fill: parent
            }
        }
    }

    header: headerComponent
    footer: footerComponent
}
