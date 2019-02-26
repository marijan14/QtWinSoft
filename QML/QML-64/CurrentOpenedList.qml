import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Current Opened List")
    id: currentOpenedWindow

    Header3 {}

    TaskList {
        anchors.margins: 50
        anchors.centerIn: parent
    }

    Component {
        id: f1
        Footer2 {}
    }
}
