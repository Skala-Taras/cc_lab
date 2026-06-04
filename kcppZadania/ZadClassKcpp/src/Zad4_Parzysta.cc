/*
 * Zad4_Parzysta.cc - Zadanie 4.7: Sprawdzanie parzystosci
 */

#include "../include/Zad4_Parzysta.h"

Zad4_Parzysta::Zad4_Parzysta()
    : ZadKcpp("4.7 - Sprawdzanie parzystosci", "Sekcja 4") {}

bool Zad4_Parzysta::czyParzystaBitowo(int liczba) {
    return (liczba & 1) == 0;
}

bool Zad4_Parzysta::czyParzystaModulo(int liczba) {
    return liczba % 2 == 0;
}

bool Zad4_Parzysta::czyParzystaWarunkowy(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

void Zad4_Parzysta::uruchom() {
    cout << "=== Zadanie 4.7: Sprawdzanie parzystosci ===" << endl;

    int testowe[] = {2, 7, 0, -4, 13};
    int ile = 5;

    for (int i = 0; i < ile; i++) {
        int n = testowe[i];
        cout << "Liczba " << n << ": ";
        cout << "bitowo=" << (czyParzystaBitowo(n) ? "parzysta" : "nieparzysta");
        cout << ", modulo=" << (czyParzystaModulo(n) ? "parzysta" : "nieparzysta");
        cout << ", warunkowy=" << (czyParzystaWarunkowy(n) ? "parzysta" : "nieparzysta");
        cout << endl;
    }
}
