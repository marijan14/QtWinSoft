import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Create New List")
    id: createNewWindow

    Header2 {
        height: 100
        width: 100
    }

    Text {
        id: newListName
        x: 10
        y: 70
        text: qsTr("Name your new list")
        font.bold: true
        font.pixelSize: 20
    }

    Text {
        x: 215
        y: 78
        text: "(Ex: \"Things I need to do today\")"
        color: "gray"
    }

    TextField {
        id: listName
        y: 105
        x: 10
        width: 600
        placeholderText: qsTr("Enter list name")
    }

    RowLayout {
        x: 10
        y: 160

        Button {
            text: "Create this list"
            onClicked: {
                if(listName.text.trim() != "")
                    toDoLists.addList(listName.text.trim())
            }
        }

        Button {
            text: "Cancel"
            onClicked: createNewWindow.close()
        }
    }
}
