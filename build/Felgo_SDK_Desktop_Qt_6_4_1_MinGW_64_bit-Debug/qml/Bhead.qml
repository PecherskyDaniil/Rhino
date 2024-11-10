import QtQuick
import Felgo

Rectangle{
    width:15
    height:15
    color: Qt.rgba(0.6,0.55,0.44,1)
    Rectangle{
        width:4
        height:4
        color: Qt.rgba(0.9,0.2,0.2,1)
        anchors.centerIn: parent
    }
    Rectangle{
        width:10
        height:5
        color: Qt.rgba(0.9,0.9,0.2,1)
        anchors.right: parent.left
        anchors.bottom: parent.bottom
    }
}
