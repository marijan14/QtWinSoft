import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Rectangle {
        width: parent.width
        height: parent.height

        Column {
            Repeater {
                model: ["apples", "oranges", "pears"]
                Text { text: "Data: " + modelData }
            }
        }
    }
}
