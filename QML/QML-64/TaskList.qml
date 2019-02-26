import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3
import Task 1.0

ListView {
    width: 250
    height: 250
    clip: true
    anchors.fill: parent
    spacing: 10

    model: TaskModel {
        list: toDoList
    }

    delegate: RowLayout {
        width: parent.width

        CheckBox {
            //checked: model.status
            onClicked: {
                if(checked === true) {
                    toDoList.moveToCompleted()
                }

//                checked = Qt.binding(function() {
//                    return toDoList.moveToCompleted()
//                });
            }
        }

        Text {
            text: model.description
            Layout.fillWidth: true
        }
    }

    footer: f1
}
