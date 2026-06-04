/*
 * Zad1_ClassExample.cc - Zadanie 1.1: Prosty program z jedna klasa
 */

#include "../include/Zad1_ClassExample.h"

// Prosta klasa wewnetrzna do demonstracji
class Pojazd {
public:
    string marka;
    int rok;

    Pojazd(string m, int r) : marka(m), rok(r) {}

    void wyswietl() {
        cout << "Pojazd: " << marka << ", rok: " << rok << endl;
    }
};

Zad1_ClassExample::Zad1_ClassExample()
    : ZadKcpp("1.1 - Prosty program z klasa", "Sekcja 1") {}

void Zad1_ClassExample::uruchom() {
    cout << "=== Zadanie 1.1: Prosty program z klasa ===" << endl;

    Pojazd p1("Toyota", 2020);
    Pojazd p2("BMW", 2022);

    p1.wyswietl();
    p2.wyswietl();

    // Zmiana danych
    p1.marka = "Honda";
    p1.rok = 2023;
    cout << "Po zmianie: ";
    p1.wyswietl();
}
