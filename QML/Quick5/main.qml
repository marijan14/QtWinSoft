import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 1.3

Window {
    visible: true
    width: 500
    height: 500

    Slider {
        width: parent.width
        maximumValue: 360
        minimumValue: 0
        value: 0
        onValueChanged: {
            console.log(value)
            gif.rotation = value
        }
    }

    Image {
        id: logo
        source: "files/images/btn_white_down.png"
    }

    Image {
        id: phone
        source: "files/images/phone.jpg"
        anchors.centerIn: logo
    }

    AnimatedImage {
        id: gif
        source: "files/images/giphy.gif"
        anchors.centerIn: parent
        opacity: 0.5
    }
}
