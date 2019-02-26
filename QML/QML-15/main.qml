import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    DarkSquare {
        width: parent.width
        height: parent.height

        GreenSquare {
            id: square
            x: 8
            y: 8
        }
        focus: true
        Keys.onLeftPressed: square.x -= 8
        Keys.onRightPressed: square.x += 8
        Keys.onUpPressed: square.y -= 8
        Keys.onDownPressed: square.y += 8
        Keys.onPressed: {
            switch(event.key) {
            case Qt.Key_Plus:
                square.scale += 0.2
                break;
            case Qt.Key_Minus:
                square.scale -= 0.2
                break;
            }
        }
    }
}
