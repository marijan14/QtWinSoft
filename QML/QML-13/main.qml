import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Rectangle {
        TLineEditV1 {
            id: input1
            x: 8
            y: 8
            width: 96; height: 20
            text: "Text Input 1"
            KeyNavigation.tab: input2
        }

        TLineEditV1 {
            id: input2
            x: 8
            y: 36
            width: 96; height: 20
            text: "Text Input 2"
            KeyNavigation.tab: input1
        }
    }
}
