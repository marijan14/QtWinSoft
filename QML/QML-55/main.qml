import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.XmlListModel 2.0

Window {
    visible: true
    width: 640
    height: 480

    XmlListModel {
        id: feedModel
        source: "http://rss.news.yahoo.com/rss/oceania"
        query: "/rss/channel/item"

        XmlRole { name: "title"; query: "title/string()" }
        XmlRole { name: "link"; query: "link/string()" }
        XmlRole { name: "description"; query: "description/string()" }
    }

    ListView {
        model: feedModel
        anchors.fill: parent
    }
}
