import QtQuick 2.0

Text {
    text: applicationData.getCurrentDateTime()

    Connections {
        target: applicationData
        onDataChanged: console.log("The application data changed!")
    }
}
