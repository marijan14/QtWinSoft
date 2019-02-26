import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Text {
        id: thisLabel
        x: 24
        y: 16
        height: 2 * width
        property int times: 24
        property alias anotherTimes: thisLabel.times
        text: qsTr("Greetings " + times)
        font.family: "Ubuntu"
        font.pixelSize: 24
        KeyNavigation.tab: thisLabel
        onHeightChanged: console.log('height:', height)
        focus: true
        color: focus ? "red" : "black"
    }
}
