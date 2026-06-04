/*
 * Zad3_Suma.cc - Zadanie 3.2: Sumowanie elementow tablicy wskaznikami
 */

#include "../include/Zad3_Suma.h"

Zad3_Suma::Zad3_Suma()
    : ZadKcpp("3.2 - Suma tablicy (wskazniki)", "Sekcja 3") {}

int Zad3_Suma::suma(int* tab, int rozmiar) {
    int s = 0;
    for (int i = 0; i < rozmiar; i++) {
        s += *(tab + i);
    }
    return s;
}

void Zad3_Suma::uruchom() {
    cout << "=== Zadanie 3.2: Suma elementow tablicy ===" << endl;

    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int rozmiar = 10;

    cout << "Tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    cout << "Suma = " << suma(tab, rozmiar) << endl;
}
