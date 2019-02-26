import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 500
    height: 500

    Rectangle {
        id: root
        width: parent.width / 2
        height: parent.height / 2
        color: "green"
        anchors.centerIn: parent
    }

    Rectangle {
        id: smallblue
        width: 50
        height: 50
        color: "blue"
        //radius: width * 0.5
        anchors.centerIn: root
    }

    Rectangle {
        id: bigred
        width: 100
        height: 50
        color: "red"
        anchors.top: root.top
        anchors.left: root.left
    }

    Rectangle {
        id: yellowbox
        width: 100
        height: 100
        color: "yellow"
        anchors.top: smallblue.bottom
        anchors.left: smallblue.right
        anchors.margins: -10

        Rectangle {
            id: blackbox
            width: 50
            height: 50
            color: "black"
            anchors.margins: 5
            anchors.left: parent.left
        }
    }
}
