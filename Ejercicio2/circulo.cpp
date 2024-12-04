#include <iostream>
#include <cmath>

namespace Geometria {
    float calcularAreaCirculo(float radio) {
        float area = M_PI * pow(radio, 2);
        std::cout<<"El area del circulo es: "<<area<<std::endl;
        return area;
    }
}
