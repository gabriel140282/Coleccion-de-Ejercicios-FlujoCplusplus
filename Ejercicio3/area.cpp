// area.cpp
#include <iostream>
#include "../Ejercicio2/geometria.h"
#include <cmath>

namespace Geometria {
    void Circulo::calcularArea() const {
        float area = M_PI * radio * radio;
        std::cout << "Area del circulo: " << area << std::endl;
    }
}
