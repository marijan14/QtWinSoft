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

        ParticleSystem { id: particleSystem }

        Emitter {
            id: emitter
            anchors.centerIn: parent
            system: particleSystem
            lifeSpan: 8000
            size: 32
            endSize: 16
        }

        ImageParticle {
            source: "images/star.png"
            system: particleSystem
            color: '#FFD700'
            colorVariation: 0.2
            rotation: 0
            rotationVariation: 45
            rotationVelocity: 15
            rotationVelocityVariation: 15
            entryEffect: ImageParticle.Scale
        }
    }
}
