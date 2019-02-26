import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.3

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("States Example")

    Column {
        spacing: 15
        anchors.centerIn: parent

        Button {
            id: btnStop
            text: "Stop"
            onClicked: stoplight.state = "stop"
        }

        Button {
            id: btnGo
            text: "Go"
            onClicked: stoplight.state = "go"
        }

        StopLight {
            id: stoplight
            state: "stop"
        }
    }
}
