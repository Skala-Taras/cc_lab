/*
 * Zad2_PrzeciazaniePole.cc - Zadanie 2.2: Przeciazanie funkcji pole()
 */

#include "../include/Zad2_PrzeciazaniePole.h"
#include <cmath>

Zad2_PrzeciazaniePole::Zad2_PrzeciazaniePole()
    : ZadKcpp("2.2 - Przeciazanie funkcji pole()", "Sekcja 2") {}

double Zad2_PrzeciazaniePole::pole(double bok) {
    // Kwadrat
    return bok * bok;
}

double Zad2_PrzeciazaniePole::pole(double a, double b) {
    // Prostokat
    return a * b;
}

double Zad2_PrzeciazaniePole::poleKola(double promien) {
    // Kolo
    return 3.14159265 * promien * promien;
}

void Zad2_PrzeciazaniePole::uruchom() {
    cout << "=== Zadanie 2.2: Przeciazanie funkcji pole() ===" << endl;

    double bok = 5.0;
    cout << "Pole kwadratu (bok=" << bok << "): " << pole(bok) << endl;

    double a = 4.0, b = 6.0;
    cout << "Pole prostokata (a=" << a << ", b=" << b << "): " << pole(a, b) << endl;

    double r = 3.0;
    cout << "Pole kola (r=" << r << "): " << poleKola(r) << endl;
}
