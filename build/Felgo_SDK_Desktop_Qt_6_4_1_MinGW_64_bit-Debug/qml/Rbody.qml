import QtQuick
import Felgo


Rectangle {
    width: 400
    height: 200
    color: Qt.rgba(0.2,0.2,0.2,0.8)
    Rectangle {
        width: 350
        height: 20
        color: Qt.rgba(0.2,0.2,0.2,0.8)
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom:parent.top
    }
    Rectangle {
        width: 200
        height: 10
        color: Qt.rgba(0.2,0.2,0.2,0.8)
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top:parent.bottom
    }
}


