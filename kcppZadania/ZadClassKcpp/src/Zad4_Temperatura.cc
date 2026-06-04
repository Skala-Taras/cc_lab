/*
 * Zad4_Temperatura.cc - Zadanie 4.5: Tabela konwersji temperatur
 */

#include "../include/Zad4_Temperatura.h"
#include <iomanip>

Zad4_Temperatura::Zad4_Temperatura()
    : ZadKcpp("4.5 - Tabela konwersji temperatur", "Sekcja 4") {}

void Zad4_Temperatura::uruchom() {
    cout << "=== Zadanie 4.5: Konwersja temperatur ===" << endl;

    cout << right << setw(10) << "Celsjusz"
         << setw(15) << "Fahrenheit" << endl;
    cout << setw(10) << "-------"
         << setw(15) << "---------" << endl;

    cout << fixed << setprecision(2);
    for (int c = -10; c <= 10; c += 5) {
        double f = c * 9.0 / 5.0 + 32.0;
        cout << right << setw(7) << c
             << setw(14) << f << endl;
    }
}
