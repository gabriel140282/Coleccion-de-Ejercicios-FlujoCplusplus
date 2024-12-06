#include "ciencia.h"

// Definición de la constante VELOCIDAD_DE_LA_LUZ
const double Ciencia::Fisica::VELOCIDAD_DE_LA_LUZ = 299792458.0;

// Definición de la función calcularEnergia
double Ciencia::Fisica::calcularEnergia(double masa) {
    return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
}
