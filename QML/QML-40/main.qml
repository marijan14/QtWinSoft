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
            ctx.fillStyle = "green"
            ctx.strokeStyle = "blue"
            ctx.lineWidth = 4
            ctx.fillRect(20, 20, 80, 80)
            ctx.clearRect(30, 30, 60, 60)
            ctx.strokeRect(20, 20, 40, 40)
        }
    }
}
