import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Button {
        id: button
        x: 12
        y: 12
        text: "Start"
        onClicked: status.text = "Button clicked!"
    }

    Text {
        id: status
        x: 12
        y: 76
        width: 116
        height: 26
        text: "waiting ..."
        horizontalAlignment: Text.AlignHCenter
    }
}
