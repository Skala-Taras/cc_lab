/*
 * Zad2_Zwracanie.cc - Zadanie 2.1: Zwracanie przez wartosc, referencje, wskaznik
 */

#include "../include/Zad2_Zwracanie.h"

Zad2_Zwracanie::Zad2_Zwracanie()
    : ZadKcpp("2.1 - Zwracanie przez wartosc/referencje/wskaznik", "Sekcja 2") {}

int Zad2_Zwracanie::zwrocPrzezWartosc(int a, int b) {
    return a + b; // zwraca kopie wyniku
}

int& Zad2_Zwracanie::zwrocPrzezReferencje(int& x) {
    x *= 2;
    return x; // zwraca referencje do zmiennej
}

int* Zad2_Zwracanie::zwrocPrzezWskaznik(int* arr, int rozmiar) {
    int* max = arr;
    for (int i = 1; i < rozmiar; i++) {
        if (*(arr + i) > *max) {
            max = arr + i;
        }
    }
    return max; // zwraca wskaznik do max elementu
}

void Zad2_Zwracanie::zwrocTablice(int* src, int* dest, int rozmiar) {
    // Tablicy nie da sie zwrocic bezposrednio - kopiujemy przez wskaznik
    for (int i = 0; i < rozmiar; i++) {
        *(dest + i) = *(src + i);
    }
}

void Zad2_Zwracanie::uruchom() {
    cout << "=== Zadanie 2.1: Zwracanie przez funkcje ===" << endl;

    // 1. Przez wartosc
    int wynik = zwrocPrzezWartosc(3, 7);
    cout << "1. Przez wartosc: 3 + 7 = " << wynik << endl;

    // 2. Przez referencje
    int x = 5;
    cout << "2. Przez referencje: x przed = " << x;
    int& ref = zwrocPrzezReferencje(x);
    cout << ", x po = " << x << ", ref = " << ref << endl;

    // 3. Przez wskaznik
    int tab[] = {4, 9, 2, 7, 1};
    int* maxPtr = zwrocPrzezWskaznik(tab, 5);
    cout << "3. Przez wskaznik: max element = " << *maxPtr << endl;

    // 4. Tablica
    int src[] = {10, 20, 30};
    int dest[3];
    zwrocTablice(src, dest, 3);
    cout << "4. Tablica (kopia): ";
    for (int i = 0; i < 3; i++) cout << dest[i] << " ";
    cout << endl;
    cout << "   (Tablicy nie da sie zwrocic bezposrednio - uzywamy wskaznikow)" << endl;
}
