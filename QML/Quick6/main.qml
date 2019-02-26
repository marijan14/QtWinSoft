import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 1.3

Window {
    visible: true
    id: root
    width: 650
    height: 650

    Column {
        Row {
            id: tools

            Button {
                text: "Reset"
                onClicked: {
                    display.fillMode = Image.Stretch
                    display.width = display.sourceSize.width
                    display.height = display.sourceSize.height
                    display.anchors.centerIn = viewport
                    display.clip = false
                }
            }

            Button {
                text: "Stretch"
                onClicked: {
                    display.fillMode = Image.Stretch
                    display.width = 200
                    display.height = 25
                }
            }

            Button {
                text: "Preserve Aspect Fit"
                onClicked: {
                    display.fillMode = Image.PreserveAspectFit
                    display.width = 400
                    display.height = 400
                }
            }

            Button {
                text: "Preserve Aspect Crop"
                onClicked: {
                    display.fillMode = Image.PreserveAspectCrop
                    display.width = 25
                    display.height = 400
                    display.clip = true
                }
            }

            Button {
                text: "Tile"
                onClicked: {
                    display.fillMode = Image.Tile
                    display.width = viewport.width
                    display.height = viewport.height
                }
            }

            Button {
                text: "TileHorizontally"
                onClicked: {
                    display.fillMode = Image.TileHorizontally
                    display.width = viewport.width
                    display.height = viewport.height
                }
            }

            Button {
                text: "TileVertically"
                onClicked: {
                    display.fillMode = Image.TileVertically
                    display.width = viewport.width
                    display.height = viewport.height
                }
            }
        }

        Rectangle {
            id: viewport
            width: root.width
            height: root.height

            AnimatedImage {
                id: display
                anchors.centerIn: parent
                source: "files/images/giphy.gif"
            }
        }
    }
}
