import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    Canvas {
        id: canvas
        width: parent.width
        height: parent.height
        onPaint: {
            var ctx = getContext("2d")
            ctx.globalCompositeOperation = "xor"
            ctx.fillStyle = "#33a9ff"
            for(var i = 0; i < 40; i++) {
                ctx.beginPath()
                ctx.arc(Math.random() * 400, Math.random() * 200, 20, 0, 2 * Math.PI)
                ctx.closePath()
                ctx.fill()
            }
        }
    }
}
