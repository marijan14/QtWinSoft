import QtQuick 2.9

ListView {
    width: 200
    height: 250
    model: myModel
    delegate: Text { text: "Animal: " + type + ", " + size }
}
