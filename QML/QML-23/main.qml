import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Column {
        spacing: 2

        Repeater {
            model: ["Enterprise", "Columbia", "Challenger", "Discovery", "Endeavour", "Atlantis"]

            BlueBox {
                width: 100
                height: 32
                radius: 3
                text: modelData + " (" + index + ")"
            }
        }
    }
}
