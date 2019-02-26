import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Text {
        id: txt1
        text: qsTr("A very long text")
        width: 40
        height: 120
        elide: Text.ElideMiddle
        style: Text.Sunken
        styleColor: '#FF4444'
        verticalAlignment: Text.AlignTop
        anchors.centerIn: parent
    }
}
