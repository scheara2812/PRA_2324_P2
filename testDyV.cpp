#include <iostream>
#include <vector>
#include "DyV.h"


template <typename T>
void PrintVector(const std::vector<T>& v) {
    for (const auto& elem : v) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
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

    std::vector<int> vecInt = {5, 2, 9, 1, 5, 6};
    std::cout << "Original (int): ";
    PrintVector(vecInt);
    QuickSort(vecInt, 0, vecInt.size() - 1);
    std::cout << "Ordenado (int): ";
    PrintVector(vecInt);

    std::vector<float> vecFloat = {3.1, 2.4, 5.6, 1.2, 4.9};
    std::cout << "Original (float): ";
    PrintVector(vecFloat);
    QuickSort(vecFloat, 0, vecFloat.size() - 1);
    std::cout << "Ordenado (float): ";
    PrintVector(vecFloat);

    std::vector<char> vecChar = {'z', 'a', 'd', 'b', 'c'};
    std::cout << "Original (char): ";
    PrintVector(vecChar);
    QuickSort(vecChar, 0, vecChar.size() - 1);
    std::cout << "Ordenado (char): ";
    PrintVector(vecChar);


    return 0;
}


