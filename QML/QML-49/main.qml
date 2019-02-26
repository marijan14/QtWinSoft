import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Particles 2.0

Window {
    visible: true
    width: 640
    height: 480

    Rectangle {
        id: root
        width: 480
        height: 160
        color: "#1f1f1f"

        ParticleSystem {
            id: particleSystem
        }

        Emitter {
            id: emitter
            anchors.centerIn: parent
            width: 160
            height: 80
            system: particleSystem
            emitRate: 10
            lifeSpan: 1000
            lifeSpanVariation: 500
            size: 16
            endSize: 32

            Tracer { color: "green" }
        }

        ImageParticle {
            source: "images/particle.png"
            system: particleSystem
        }
    }
}
