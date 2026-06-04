/*
Zadanie 5.6
--------------------------------------
Bazujac na LClassMetodyAbstrakcyjne.cc stworz program ktory oblicza:
- obwod, pole powierzchni
dla:
- kwadrat, trojkat, prostokat, kolo (klasy dziedziczace po klasie abstrakcyjnej Figura)
oraz funkcja Dystans (dodatkowo w klasie Kolo):
  Jesli rzad podaje, ze na kazdego obywatela przypada X metrow kwadratowych,
  to w jakiej odleglosci (promieniu) moze znalezc sie nastepna osoba.
  Dystans zwraca promien obliczony ze wzoru: r = sqrt(X / PI)
Nazwij program: ZadMetodyAbstrakcyjne.cc
*/

#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265;

// Klasa abstrakcyjna - bazowa
class Figura {
protected:
    string nazwa;

public:
    Figura(string n) : nazwa(n) {}

    // Metody czysto wirtualne (abstrakcyjne)
    virtual double pole() = 0;
    virtual double obwod() = 0;
    virtual void wyswietl() = 0;

    virtual ~Figura() {}

    string pobierzNazwe() { return nazwa; }
};

// Kwadrat
class Kwadrat : public Figura {
private:
    double bok;

public:
    Kwadrat(double b) : Figura("Kwadrat"), bok(b) {}

    double pole() {
        return bok * bok;
    }

    double obwod() {
        return 4 * bok;
    }

    void wyswietl() {
        cout << "Kwadrat (bok = " << bok << "):" << endl;
        cout << "  Pole:  " << pole() << endl;
        cout << "  Obwod: " << obwod() << endl;
    }
};

// Prostokat
class Prostokat : public Figura {
private:
    double bokA;
    double bokB;

public:
    Prostokat(double a, double b) : Figura("Prostokat"), bokA(a), bokB(b) {}

    double pole() {
        return bokA * bokB;
    }

    double obwod() {
        return 2 * (bokA + bokB);
    }

    void wyswietl() {
        cout << "Prostokat (a = " << bokA << ", b = " << bokB << "):" << endl;
        cout << "  Pole:  " << pole() << endl;
        cout << "  Obwod: " << obwod() << endl;
    }
};

// Trojkat
class Trojkat : public Figura {
private:
    double bokA;
    double bokB;
    double bokC;
    double wysokosc; // wysokosc na bok A

public:
    Trojkat(double a, double b, double c, double h)
        : Figura("Trojkat"), bokA(a), bokB(b), bokC(c), wysokosc(h) {}

    double pole() {
        return 0.5 * bokA * wysokosc;
    }

    double obwod() {
        return bokA + bokB + bokC;
    }

    void wyswietl() {
        cout << "Trojkat (a=" << bokA << ", b=" << bokB
             << ", c=" << bokC << ", h=" << wysokosc << "):" << endl;
        cout << "  Pole:  " << pole() << endl;
        cout << "  Obwod: " << obwod() << endl;
    }
};

// Kolo - z dodatkowa funkcja Dystans
class Kolo : public Figura {
private:
    double promien;

public:
    Kolo(double r) : Figura("Kolo"), promien(r) {}

    double pole() {
        return PI * promien * promien;
    }

    double obwod() {
        return 2 * PI * promien;
    }

    void wyswietl() {
        cout << "Kolo (promien = " << promien << "):" << endl;
        cout << "  Pole:  " << pole() << endl;
        cout << "  Obwod: " << obwod() << endl;
    }

    // Funkcja Dystans:
    // Jesli na kazdego obywatela przypada xMetrow kwadratowych,
    // to promien (dystans) do nastepnej osoby wynosi:
    // r = sqrt(xMetrow / PI)
    double dystans(double xMetrow) {
        return sqrt(xMetrow / PI);
    }
};

int main() {
    cout << "=== Figury geometryczne - metody abstrakcyjne ===" << endl << endl;

    // Kwadrat o boku 5
    Kwadrat kw(5.0);
    kw.wyswietl();

    cout << endl;

    // Prostokat 4 x 6
    Prostokat pr(4.0, 6.0);
    pr.wyswietl();

    cout << endl;

    // Trojkat o bokach 3, 4, 5 i wysokosci 4 (na bok a=3? nie, h do a)
    // Trojkat prostokatny 3,4,5 - wysokosc na bok 5 to h = 3*4/5 = 2.4
    Trojkat tr(5.0, 4.0, 3.0, 2.4);
    tr.wyswietl();

    cout << endl;

    // Kolo o promieniu 3
    Kolo ko(3.0);
    ko.wyswietl();

    // Test funkcji Dystans
    cout << endl << "=== Funkcja Dystans (Kolo) ===" << endl;
    double metryNaOsobe = 10.0;
    cout << "Jesli na kazda osobe przypada " << metryNaOsobe
         << " m^2," << endl;
    cout << "to minimalny dystans (promien) do nastepnej osoby: "
         << ko.dystans(metryNaOsobe) << " m" << endl;

    metryNaOsobe = 4.0;
    cout << endl << "Dla " << metryNaOsobe << " m^2 na osobe:" << endl;
    cout << "Dystans: " << ko.dystans(metryNaOsobe) << " m" << endl;

    // Polimorfizm - tablica wskaznikow na Figury
    cout << endl << "=== Polimorfizm ===" << endl;
    Figura* figury[4];
    figury[0] = &kw;
    figury[1] = &pr;
    figury[2] = &tr;
    figury[3] = &ko;

    for (int i = 0; i < 4; i++) {
        cout << endl;
        figury[i]->wyswietl();
    }

    return 0;
}
