import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Column {
        spacing: 2

        Repeater {
            model: 10

            BlueBox {
                width: 120
                height: 32
                text: index
            }
        }
    }
}
