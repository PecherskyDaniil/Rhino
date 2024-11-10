import Felgo
import QtQuick

App {
    // You get free licenseKeys from https://felgo.com/licenseKey
    // With a licenseKey you can:
    //  * Publish your games & apps for the app stores
    //  * Remove the Felgo Splash Screen or set a custom one (available with the Pro Licenses)
    //  * Add plugins to monetize, analyze & improve your apps (available with the Pro Licenses)
    //licenseKey: "<generate one from https://felgo.com/licenseKey>"
    Window{
        height: 600
        width: 800
        visible: true
        id:win
        Rbody{
            id:rbody
            anchors.centerIn: parent
            Rleg{
                anchors.right: parent.right
                anchors.top: parent.bottom
            }
            Rleg{
                anchors.left: parent.left
                anchors.top: parent.bottom
            }
            Rhead{
                id:rhead
                anchors.right: parent.left
                anchors.top: parent.top
            }
        }
        Bbody{
            anchors.bottom: rbody.top
            anchors.horizontalCenter: rbody.horizontalCenter
            Bleg{
                anchors.top: parent.bottom
                anchors.horizontalCenter: parent.horizontalCenter
            }
            Bhead{
                anchors.bottom: parent.top
                anchors.left: parent.left
            }
        }
    }
    Window{
        height: 700
        width: 400
        visible: true
        id:appwin
        Rectangle{
            height:100
            width: parent.width
            color: Qt.rgba(0.4,0.4,0.4,1)
            id:header
            Text{
                text:"header"
                anchors.centerIn: parent
            }
        }
        Rectangle{
            anchors.top: header.bottom
            anchors.left: parent.left
            anchors.right:parent.right
            anchors.bottom: footer.top
            anchors.margins:5
            border.color: Qt.rgba(0.2,0.2,0.2,1)
            Text{
                text:"content"
                anchors.centerIn: parent
            }
        }
        Rectangle{
            height:100
            width: parent.width
            color: Qt.rgba(0.7,0.7,0.7,1)
            id:footer
            anchors.bottom: parent.bottom
            Rectangle{
                height:100
                width: parent.width*0.3
                color: Qt.rgba(0.5,0.5,0.5,1)
                border.color: Qt.rgba(0.2,0.2,0.2,1)

                id:b1
                anchors.left: parent.left
                Text{
                    text:"1"
                    anchors.centerIn: parent
                }
            }
            Rectangle{
                height:100
                color: Qt.rgba(0.5,0.5,0.5,1)
                border.color: Qt.rgba(0.2,0.2,0.2,1)
                anchors.right: b3.left
                anchors.left: b1.right
                anchors.margins:5
                Text{
                    text:"2"
                    anchors.centerIn: parent
                }
            }
            Rectangle{
                height:100
                width: parent.width*0.3
                color: Qt.rgba(0.5,0.5,0.5,1)
                border.color: Qt.rgba(0.2,0.2,0.2,1)
                id:b3
                anchors.right: parent.right
                Text{
                    text:"3"
                    anchors.centerIn: parent
                }
            }
        }
    }
}
