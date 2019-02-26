import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 500
    height: 500
    id: root

    Rectangle {
        id: box
        width: 50
        height: 50
        color: "green"
        opacity: 1

        NumberAnimation on x {
            to: root.width
            duration: 10000
        }

        NumberAnimation on y {
            to: root.height
            duration: 10000
        }

        RotationAnimation on rotation {
            from: 0
            to: 360
            duration: 1000
            loops: Animation.Infinite
        }

        ColorAnimation on color {
            from: "green"
            to: "red"
            duration: 8000

        }
    }

    NumberAnimation {
        id: aniOpacity
        target: box
        running: true
        properties: "opacity"
        from: 1.0
        to: 0.0
        duration: 1000
        loops: Animation.Infinite
    }
}
