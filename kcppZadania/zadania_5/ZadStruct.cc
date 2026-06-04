/*
Zadanie 5.2
--------------------------------------
Stworz plik z dzialajaca struktura:
- deklaracja,
- definicja obiektow:
  - wywolanie,
  - zmiana wartosci,
  - odczyt wartosci,
- nazwij program: ZadStruct.cc
*/

#include <iostream>
#include <string>

using namespace std;

// Deklaracja struktury
struct Punkt {
    double x;
    double y;
    string etykieta;
};

struct Prostokat {
    Punkt lewyDol;
    Punkt prawyGora;
};

// Funkcja wyswietlajaca punkt
void wyswietlPunkt(const Punkt& p) {
    cout << p.etykieta << " (" << p.x << ", " << p.y << ")" << endl;
}

// Funkcja obliczajaca odleglosc miedzy punktami
double odleglosc(const Punkt& a, const Punkt& b) {
    double dx = b.x - a.x;
    double dy = b.y - a.y;
    return dx * dx + dy * dy; // kwadrat odleglosci (bez sqrt zeby nie dodawac cmath)
}

int main() {
    // Definicja obiektow - rozne sposoby inicjalizacji

    // Sposob 1: inicjalizacja klamrowa
    Punkt p1 = {1.0, 2.0, "A"};

    // Sposob 2: inicjalizacja poszczegolnych pol
    Punkt p2;
    p2.x = 4.0;
    p2.y = 6.0;
    p2.etykieta = "B";

    // Sposob 3: inicjalizacja klamrowa w C++11
    Punkt p3{0.0, 0.0, "Poczatek"};

    // Wywolanie - wyswietlanie
    cout << "=== Wyswietlanie punktow ===" << endl;
    wyswietlPunkt(p1);
    wyswietlPunkt(p2);
    wyswietlPunkt(p3);

    // Odczyt wartosci
    cout << endl << "=== Odczyt wartosci ===" << endl;
    cout << "Punkt p1: x = " << p1.x << ", y = " << p1.y << endl;
    cout << "Punkt p2: x = " << p2.x << ", y = " << p2.y << endl;

    // Zmiana wartosci
    cout << endl << "=== Zmiana wartosci ===" << endl;
    p1.x = 10.0;
    p1.y = 20.0;
    p1.etykieta = "A_nowy";
    cout << "Po zmianie: ";
    wyswietlPunkt(p1);

    // Struktura zagniezdzona
    cout << endl << "=== Struktura zagniezdzona (Prostokat) ===" << endl;
    Prostokat rect;
    rect.lewyDol = {0.0, 0.0, "LD"};
    rect.prawyGora = {5.0, 3.0, "PG"};

    cout << "Prostokat:" << endl;
    cout << "  Lewy dol:   ";
    wyswietlPunkt(rect.lewyDol);
    cout << "  Prawy gora: ";
    wyswietlPunkt(rect.prawyGora);

    double szerokosc = rect.prawyGora.x - rect.lewyDol.x;
    double wysokosc = rect.prawyGora.y - rect.lewyDol.y;
    cout << "  Szerokosc: " << szerokosc << ", Wysokosc: " << wysokosc << endl;
    cout << "  Pole: " << szerokosc * wysokosc << endl;

    return 0;
}
