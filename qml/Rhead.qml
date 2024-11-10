import QtQuick
import Felgo

Rectangle{
    width:120
    height:90
    color: Qt.rgba(0.2,0.2,0.2,0.8)
    Rectangle{
        width:120
        height:40
        color: Qt.rgba(0.2,0.2,0.2,0.8)
        anchors.bottom:parent.top
        anchors.left:parent.left
        Rectangle{
            width:20
            height: 20
            color: Qt.rgba(0.2,0.2,0.2,0.8)
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom:parent.bottom
        }
        Rectangle{
            width:100
            height: 10
            color: Qt.rgba(0.2,0.2,0.2,0.8)
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom:parent.top
        }
    }

    Rectangle{
        width:110
        height:80
        color: Qt.rgba(0.2,0.2,0.2,0.8)
        anchors.right: parent.left
        anchors.bottom: parent.bottom
        Rectangle{
            width:30
            height: 50
            color: Qt.rgba(0.2,0.2,0.2,0.8)
            anchors.left: parent.left
            anchors.bottom:parent.top
        }
        Rectangle{
            width:20
            height: 30
            color: Qt.rgba(0.2,0.2,0.2,0.8)
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.bottom:parent.top
        }
    }

}
