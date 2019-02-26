import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("My List")
    id: root

//    Loader {
//        id: mainLoader
//        anchors.margins: 20
//        anchors.centerIn: parent
//        source: "ToDoList.qml"
//    }

    ToDoLists {
        id: todolist
        anchors.margins: 20
        anchors.centerIn: parent
    }

    Component {
        id: headerComponent
        Header1 {}
    }

    Component {
        id: footerComponent
        Footer {
            ListView {
                id: completedLists
            }
        }
    }
}
