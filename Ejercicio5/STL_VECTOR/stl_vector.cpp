#include "stl_vector.h"
#include <vector>
#include <iostream>

void operarVector() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    numeros.push_back(6); // Agregar un elemento
    numeros.erase(numeros.begin() + 2); // Eliminar el tercer elemento
    std::cout << "Elementos en el vector: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}