#ifndef CIENCIA_H
#define CIENCIA_H

// Namespace principal para Ciencia
namespace Ciencia {
    namespace Fisica {
        // Constante para la velocidad de la luz en metros por segundo (m/s)
        extern const float VELOCIDAD_DE_LA_LUZ;

        float calcularEnergia(float masa);
    }

    namespace Matematicas {
        bool resolverEcuacionCuadratica(float a, float b, float c, float &x1, float &x2);
    }
}

// Namespace para el programa principal
namespace Programa {
    void ejecutar(float masa, float a, float b, float c);
}

#endif // CIENCIA_H
