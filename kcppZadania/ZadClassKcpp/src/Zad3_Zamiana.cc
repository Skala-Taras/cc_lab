/*
 * Zad3_Zamiana.cc - Zadanie 3.1: Zamiana miejscami za pomoca wskaznikow
 */

#include "../include/Zad3_Zamiana.h"

Zad3_Zamiana::Zad3_Zamiana()
    : ZadKcpp("3.1 - Zamiana miejscami (wskazniki)", "Sekcja 3") {}

void Zad3_Zamiana::zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Zad3_Zamiana::uruchom() {
    cout << "=== Zadanie 3.1: Zamiana miejscami ===" << endl;

    int x = 10, y = 20;
    cout << "Przed zamiana: x = " << x << ", y = " << y << endl;

    zamien(&x, &y);

    cout << "Po zamianie:   x = " << x << ", y = " << y << endl;
}
