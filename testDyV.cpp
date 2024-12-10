#include <iostream>
#include <vector>
#include "DyV.h"


int main() {
    // Vector ordenado para la búsqueda
    std::vector<int> v = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    // Elemento a buscar
    int x;
    std::cout << "Introduce el número a buscar: ";
    std::cin >> x;

    // Llamada a la función de búsqueda binaria
    int resultado = BusquedaBinaria(x, v, 0, v.size() - 1);

    // Salida del resultado
    if (resultado != -1) {
        std::cout << "Elemento encontrado en la posición: " << resultado << std::endl;
    } else {
        std::cout << "Elemento no encontrado." << std::endl;
    }

    return 0;
}


