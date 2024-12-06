#include "ciencia.h"
#include <iostream>
#include <cmath>

// Definición de la constante VELOCIDAD_DE_LA_LUZ
const float Ciencia::Fisica::VELOCIDAD_DE_LA_LUZ = 299792458.0;

// Definición de la función calcularEnergia
float Ciencia::Fisica::calcularEnergia(float masa) {
    return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
}

// Definición de la función resolverEcuacionCuadratica
bool Ciencia::Matematicas::resolverEcuacionCuadratica(float a, float b, float c, float &x1, float &x2) {
    float discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        return false;
    }

    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);
    return true;
}

// Definición de la función Programa::ejecutar
void Programa::ejecutar(float masa, float a, float b, float c) {
    if (masa < 0) {
        std::cerr << "Error: La masa no puede ser negativa." << std::endl;
        return;
    }
    float energia = Ciencia::Fisica::calcularEnergia(masa);
    std::cout << "La energia equivalente es: " << energia << " julios." << std::endl;

    float x1, x2;
    if (Ciencia::Matematicas::resolverEcuacionCuadratica(a, b, c, x1, x2)) {
        std::cout << "Las soluciones de la ecuacion de segundo grado son: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    } else {
        std::cout << "La ecuacion de segundo grado no tiene soluciones reales." << std::endl;
    }
}
