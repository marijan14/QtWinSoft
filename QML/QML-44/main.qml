import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 240
    height: 120

    Canvas {
        id: canvas
        width: parent.width
        height: parent.height
        onPaint: {
            var ctx = getContext("2d")
            ctx.lineWidth = 4;
            ctx.strokeStyle = "blue"
            ctx.translate(canvas.width / 2, canvas.height / 2)
            ctx.beginPath()
            ctx.rect(-20, -20, 40, 40)
            ctx.stroke();
            ctx.rotate(Math.PI / 4)
            ctx.strokeStyle = "green"
            ctx.beginPath()
            ctx.rect(-20, -20, 40, 40)
            ctx.stroke()
        }
    }
}
