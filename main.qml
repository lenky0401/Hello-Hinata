import QtQuick 1.1

Rectangle {
    width: 396
    height: 339
    id: main
    objectName: "main"

    Column {
        Image {
            width: 396; height: 299
            smooth: true
            source: "Hinata.jpg"
        }

        Text {
            text: "Hello-Hinata!"
            font.family: "Helvetica"
            font.pointSize: 24
            color: "red"
        }
    }
}
