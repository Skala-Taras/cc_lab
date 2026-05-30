/*
Zadanie 3.5
-------------------------------------
Napisz program: Różnica między dwoma wskaźnikami
Stwórz program, który definiuje tablicę 10 liczb całkowitych, a następnie oblicza różnicę między dwoma wskaźnikami wskazującymi na różne elementy tej tablicy.
Nazwa: ZadArytmetykaWskaznikowRoznica.cc
*/

#include <iostream>


int main() {
    int tablica[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr1 = &tablica[2];
    int* ptr2 = &tablica[7];
    ptrdiff_t roznica = ptr2 - ptr1;
    std::cout << "Wskaznik 1: " << ptr1 << std::endl;
    std::cout << "Wskaznik 2: " << ptr2 << std::endl;
    std::cout << "ROZNICA: " << roznica << std::endl;
    return 0;
}
