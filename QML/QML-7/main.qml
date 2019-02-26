import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Text {
        text: qsTr("The quick brown fox")
        color: "#303030"
        font.family: "Ubuntu"
        font.pixelSize: 28
    }
}
