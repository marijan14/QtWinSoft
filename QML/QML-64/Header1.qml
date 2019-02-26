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
            width: 200
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
                    font.pixelSize: 22
                    font.bold: true
                }

                Text {
                    id: newlist
                    text: "Create a new list"
                    font.pixelSize: 12
                    font.underline: true
                    color: "#f00"
                    smooth: mouseArea1.containsMouse

                    MouseArea {
                        id: mouseArea1
                        anchors.fill: parent
                        onClicked: {
                            ld1.source = "CreateNewList.qml"
                            //root.close()
                        }
                        hoverEnabled: true
                    }

                    Loader {
                        id: ld1
                        anchors.fill: parent
                    }
                }
            }
        }
    }
}
