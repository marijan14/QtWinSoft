import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Text {
        id: label
        x: 24
        y: 24
        property int spacePresses: 0
        text: "Space pressed: " + spacePresses + " times"
        onTextChanged: console.log("text changed to:", text)
        focus: true
        Keys.onSpacePressed: increment()
        Keys.onEscapePressed: label.text = ""
        function increment() {
            spacePresses = spacePresses + 1
        }
    }
}
