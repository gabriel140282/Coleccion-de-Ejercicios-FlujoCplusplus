#include "stl_set.h"
#include <set>
#include <iostream>

void operarSet() {
    std::set<int> numerosUnicos = {10, 20, 30, 40};
    numerosUnicos.insert(50); //Agregamos un elemento del set
    numerosUnicos.erase(20); //Eliminamos un elemento del set
    std::cout << "Elementos en el set: ";
    for (int num : numerosUnicos) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int valor = 30;
    if (numerosUnicos.find(valor) != numerosUnicos.end()) {
        std::cout << "El valor " << valor << " se encuentra en el set." << std::endl;
    } else {
        std::cout << "El valor " << valor << " no se encuentra en el set." << std::endl;
    }
}
