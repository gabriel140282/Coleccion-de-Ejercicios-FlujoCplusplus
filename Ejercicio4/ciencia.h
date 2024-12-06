#ifndef CIENCIA_H
#define CIENCIA_H

#include <iostream>

// Hacemos 2 namespaces: Uno para fisica y otro para matematicas que nos resuelva una ecuacion de segundo grado

namespace Ciencia {
    namespace Fisica {
        // Constante para la velocidad de la luz en metros por segundo (m/s)
        extern const double VELOCIDAD_DE_LA_LUZ;

        /**
         * @brief Calcula la energía a partir de la masa utilizando la fórmula E = mc^2.
         *
         * @param masa La masa en kilogramos (kg).
         * @return La energía en julios (J).
         */
        double calcularEnergia(double masa);
    }
}

namespace Programa {

    void ejecutar() {
        double masa;

        // Solicita al usuario que ingrese la masa
        std::cout << "Ingrese la masa en kilogramos: ";
        std::cin >> masa;

        // Verifica que la masa ingresada sea positiva
        if (masa < 0) {
            std::cerr << "La masa no puede ser negativa." << std::endl;
            return;
        }

        // Utiliza la función calcularEnergia del espacio de nombres Ciencia::Fisica
        double energia = Ciencia::Fisica::calcularEnergia(masa);

        // Muestra el resultado
        std::cout << "La energía equivalente es: " << energia << " julios." << std::endl;
    }

}

#endif // CIENCIA_H
