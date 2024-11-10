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
}
