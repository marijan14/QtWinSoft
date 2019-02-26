import QtQuick 2.0

Rectangle {
    width: parent.width
    height: 50

    Row {
        id: headerRow
        anchors.margins: 10

        Image {
            id: logo
            source: "files/images/tada-mark-bg.gif"
        }

        Rectangle {
            id: squareRect
            width: 80
            height: 47
            radius: 5
            color: "#EFEFEF"

            Row {
                spacing: 15
                width: parent.width
                height: parent.height

                Text {
                    id: headerName
                    text: "My Lists"
                    font.pixelSize: 15
                    font.underline: true
                    color: "blue"
                    anchors.centerIn: parent

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            ld2.source = "main.qml"
                            createNewWindow.close()
                        }
                        hoverEnabled: true
                    }

                    Loader {
                        id: ld2
                        anchors.fill: parent
                    }
                }
            }
        }
    }
}
