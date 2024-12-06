#include "Ejercicio1/matematicas.h"
#include "Ejercicio2/geometria.h"
#include "Ejercicio4/ciencia.h"
#include "Ejercicio5/Operaciones/operaciones.h"

int main() {
    suma_numeros(8, 5);
    resta_numeros(4, 2);
    Geometria::calcularAreaTriangulo(10, 20);
    Geometria::calcularAreaCirculo(5);
    Geometria::Circulo circulo(5.0);
    circulo.calcularArea();
    circulo.calcularPerimetro();
    Programa::ejecutar(40,2,4,1);
    ejecutarOperacion(4);
    return 0;
}
