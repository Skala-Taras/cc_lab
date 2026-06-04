/*
 * Zad5_MetodyAbstrakcyjne.cc - Zadanie 5.6: Figury geometryczne (obowiazkowe)
 */

#include "../include/Zad5_MetodyAbstrakcyjne.h"

// --- FigKwadrat ---
FigKwadrat::FigKwadrat(double b) : Figura("Kwadrat"), bok(b) {}

double FigKwadrat::pole() { return bok * bok; }
double FigKwadrat::obwod() { return 4 * bok; }

void FigKwadrat::wyswietl() {
    cout << "Kwadrat (bok=" << bok << "): pole=" << pole()
         << ", obwod=" << obwod() << endl;
}

// --- FigProstokat ---
FigProstokat::FigProstokat(double a, double b) : Figura("Prostokat"), bokA(a), bokB(b) {}

double FigProstokat::pole() { return bokA * bokB; }
double FigProstokat::obwod() { return 2 * (bokA + bokB); }

void FigProstokat::wyswietl() {
    cout << "Prostokat (a=" << bokA << ", b=" << bokB << "): pole=" << pole()
         << ", obwod=" << obwod() << endl;
}

// --- FigTrojkat ---
FigTrojkat::FigTrojkat(double a, double b, double c, double h)
    : Figura("Trojkat"), bokA(a), bokB(b), bokC(c), wysokosc(h) {}

double FigTrojkat::pole() { return 0.5 * bokA * wysokosc; }
double FigTrojkat::obwod() { return bokA + bokB + bokC; }

void FigTrojkat::wyswietl() {
    cout << "Trojkat (a=" << bokA << ", b=" << bokB << ", c=" << bokC
         << ", h=" << wysokosc << "): pole=" << pole()
         << ", obwod=" << obwod() << endl;
}

// --- FigKolo ---
FigKolo::FigKolo(double r) : Figura("Kolo"), promien(r) {}

double FigKolo::pole() { return M_PI_VAL * promien * promien; }
double FigKolo::obwod() { return 2 * M_PI_VAL * promien; }

void FigKolo::wyswietl() {
    cout << "Kolo (r=" << promien << "): pole=" << pole()
         << ", obwod=" << obwod() << endl;
}

double FigKolo::dystans(double metryNaOsobe) {
    // r = sqrt(X / PI)
    return sqrt(metryNaOsobe / M_PI_VAL);
}

// --- Zad5_MetodyAbstrakcyjne ---
Zad5_MetodyAbstrakcyjne::Zad5_MetodyAbstrakcyjne()
    : ZadKcpp("5.6 - Metody abstrakcyjne (Figury)", "Sekcja 5") {}

void Zad5_MetodyAbstrakcyjne::uruchom() {
    cout << "=== Zadanie 5.6: Figury geometryczne ===" << endl;

    FigKwadrat kw(5.0);
    FigProstokat pr(4.0, 6.0);
    FigTrojkat tr(5.0, 4.0, 3.0, 2.4);
    FigKolo ko(3.0);

    // Polimorfizm
    Figura* figury[] = {&kw, &pr, &tr, &ko};

    for (int i = 0; i < 4; i++) {
        figury[i]->wyswietl();
    }

    // Funkcja Dystans
    cout << endl << "--- Dystans (Kolo) ---" << endl;
    double m2 = 10.0;
    cout << "Dla " << m2 << " m^2 na osobe, dystans = "
         << ko.dystans(m2) << " m" << endl;

    m2 = 4.0;
    cout << "Dla " << m2 << " m^2 na osobe, dystans = "
         << ko.dystans(m2) << " m" << endl;
}
