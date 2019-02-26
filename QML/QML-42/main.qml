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
        smooth: true
        onPaint: {
            var ctx = getContext("2d")
            ctx.strokeStyle = "#333"
            ctx.fillRect(0, 0, canvas.width, canvas.height)
            ctx.shadowColor = "#2ed5fa"
            ctx.shadowOffsetX = 2
            ctx.shadowOffsetY = 2
            ctx.shadowBlur = 10
            ctx.font = 'bold 80px Arial'
            ctx.fillStyle = "#24d12e"
            ctx.fillText("Canvas!", 30, 180)
        }
    }
}
