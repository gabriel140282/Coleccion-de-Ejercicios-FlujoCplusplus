// area.cpp
#include <iostream>
#include "../Ejercicio2/geometria.h"
#include <cmath>

namespace Geometria {
    void Circulo::calcularArea() const {
        double area = M_PI * radio * radio;
        std::cout << "Área del círculo: " << area << std::endl;
    }
}
