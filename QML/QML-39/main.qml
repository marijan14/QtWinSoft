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
            var ctx = getContext('2d')
            ctx.lineWidth = 4
            ctx.strokeStyle = 'blue'
            ctx.fillStyle = 'steelblue'
            ctx.beginPath()
            ctx.moveTo(50, 50)
            ctx.lineTo(150, 50)
            ctx.lineTo(150, 150)
            ctx.lineTo(50, 150)
            ctx.closePath()
            ctx.fill()
            ctx.stroke()
        }
    }
}
