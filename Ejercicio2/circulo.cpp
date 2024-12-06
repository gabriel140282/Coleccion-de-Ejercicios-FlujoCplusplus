#include <iostream>
#include <cmath>
#include "../Ejercicio2/geometria.h"

namespace Geometria {
    float calcularAreaCirculo(float radio) {
        float area = M_PI * pow(radio, 2);
        std::cout<<"El area del circulo es: "<<area<<std::endl;
        return area;
    }
}
