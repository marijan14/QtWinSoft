import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 200
    height: 200

    Rectangle {
        width: parent.width
        height: parent.height

        ListModel {
            id: fruitModel
            property string language: "en"
            ListElement { name: "Apple"; cost: 2.45 }
            ListElement { name: "Orange"; cost: 3.25 }
            ListElement { name: "Banana"; cost: 1.95 }
        }

        Component {
            id: fruitDelegate
            Row {
                id: fruit
                Text { text: " Fruit: " + name; color: fruit.ListView.view.fruit_color }
                Text { text: " Cost: $" + cost }
                Text { text: " Language: " + fruit.ListView.view.model.language }
            }
        }

        ListView {
            property color fruit_color: "green"
            model: fruitModel
            delegate: fruitDelegate
            anchors.fill: parent
        }
    }
}
