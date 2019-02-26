import QtQuick 2.0

Text {
    text: "Add another item"
    font.underline: true
    color: "#f00"

    MouseArea {
        anchors.fill: parent
        onClicked: {
            ld2.source = "AddNewTasks.qml"
        }
        hoverEnabled: true
    }

    Loader {
        id: ld2
        anchors.fill: parent
    }
}
