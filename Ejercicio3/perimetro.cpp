// perimetro.cpp
#include "../Ejercicio2/geometria.h"
#include <cmath>

namespace Geometria {
    void Circulo::calcularPerimetro() const {
        double perimetro = 2 * M_PI * radio;
        std::cout << "Perímetro del círculo: " << perimetro << std::endl;
    }
}
