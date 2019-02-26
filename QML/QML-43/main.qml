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
            ctx.drawImage("files/images/ball.png", 10, 10)
            ctx.save()
            ctx.strokeStyle = '#ff2a68'
            ctx.beginPath()
            ctx.moveTo(110, 10)
            ctx.lineTo(155, 10)
            ctx.lineTo(135, 55)
            ctx.closePath()
            ctx.clip()
            ctx.drawImage("files/images/ball.png", 100, 10)
            ctx.stroke()
            ctx.restore()
        }
        Component.onCompleted: { loadImage("files/images/ball.png") }
    }
}
