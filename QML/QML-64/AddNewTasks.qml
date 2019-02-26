import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Add New Tasks")
    id: addNewTasksWindow

    ColumnLayout {
        anchors.centerIn: parent
        ColumnLayout {
            Text {
                x: 10
                y: 10
                text: toDoLists.getName()
                font.pixelSize: 30
                font.bold: true
            }

            TextField {
                id: itemName
                width: 550
                x: 20
            }
        }

        RowLayout {

            Button {
                text: "Add this item"
                onClicked: {
                    if(itemName.text.trim() != "")
                        toDoList.addItems(itemName.text.trim())
                }
            }

            Button {
                text: "Cancel"
                onClicked: addNewTasksWindow.close()
            }
        }
    }
}
