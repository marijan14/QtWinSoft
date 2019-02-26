import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Canvas {
        id: root
        width: parent.width
        height: parent.height
        onPaint: {
            var ctx = getContext("2d")
            var gradient = ctx.createLinearGradient(100, 0, 100, 200)
            gradient.addColorStop(0, "blue")
            gradient.addColorStop(0.5, "lightsteelblue")
            ctx.fillStyle = gradient
            ctx.fillRect(50, 50, 100, 100)
        }
    }
}
