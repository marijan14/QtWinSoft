import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

Text {
    text: qsTr("Completed lists: ")
    font.bold: true
    font.pixelSize: 10

    ListView {
        clip: true
        //model: CompletedListsModel {}

        delegate: ColumnLayout {
            Text {
                text: model.name
            }
        }
    }

}
