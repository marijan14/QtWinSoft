import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480

    ListModel {
        id: nameModel
        ListElement { name: "Alice" }
        ListElement { name: "Bob" }
        ListElement { name: "Jane" }
        ListElement { name: "Harry" }
        ListElement { name: "Wendy" }
    }

    Component {
        id: nameDelegate

        Text {
            font.pixelSize: 24
            text: name
        }
    }

    ListView {
        anchors.fill: parent
        clip: true
        model: nameModel
        delegate: nameDelegate
        header: bannercomponent
        footer: Rectangle {
            width: parent.width
            height: 30
            gradient: clubcolors
        }
        highlight: Rectangle {
            width: parent.width
            color: "lightgray"
        }
    }

    Component {
        id: bannercomponent

        Rectangle {
            id: banner
            width: parent.width
            height: 50
            gradient: clubcolors
            border.color: "#9EDDF2"
            border.width: 2

            Text {
                anchors.centerIn: parent
                text: qsTr("Club Members")
                font.pixelSize: 32
            }
        }
    }

    Gradient {
        id: clubcolors
        GradientStop { position: 0.0; color: "#8EE2FE" }
        GradientStop { position: 0.66; color: "#7ED2EE" }
    }
}
