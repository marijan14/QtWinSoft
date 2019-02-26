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
            width: 230
            height: 47
            radius: 5
            color: "#EFEFEF"

            Text {
                id: headerName
                x: 15
                y: 14
                text: "My Lists"
                font.pixelSize: 15
                font.underline: true
                color: "blue"

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                        ld.source = "main.qml"
                        createNewWindow.close()
                    }
                    hoverEnabled: true
                }

                Loader {
                    id: ld
                    anchors.fill: parent
                }
            }

            Text {
                x: 80
                y: 16
                text: qsTr("This list: ")
                font.bold: true
                font.pixelSize: 13
            }

            Text {
                x: 145
                y: 18
                text: qsTr("Edit")
                color: "#f00"
                font.underline: true

                MouseArea {
                    anchors.fill: parent
                    onClicked: ld3.source = "EditList.qml"
                }

                Loader {
                    id: ld3
                    anchors.fill: parent
                }
            }

            Text {
                x: 175
                y: 18
                text: qsTr("Reorder")
                color: "#f00"
                font.underline: true
            }
        }
    }
}
