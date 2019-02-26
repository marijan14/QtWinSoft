import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 400
    height: 400

    Rectangle {
        width: parent.width
        height: parent.height
        color: "black"

        Grid {
            x: 5
            y: 5
            rows: 5
            columns: 5
            spacing: 10

            Repeater {
                model: 24

                Rectangle {
                    width: 70
                    height: 70
                    color: "lightgreen"

                    Text {
                        text: index
                        font.pointSize: 30
                        anchors.centerIn: parent
                    }
                }
            }
        }
    }
}
