/*
Zadanie 5.4
--------------------------------------
Stworz klase z przykladami konstruktorow i inicjalizacja zmiennych:
- domyslny konstruktor,
- domyslny destruktor,
- konstruktor z niepusta liczba argumentow
- inicjalizacja zmiennych:
  - 'standardowa',
  - inicjalizacyjna za pomoca listy inicjalizacyjnej
- nazwij program: ZadKlasaKonstruktor.cc
*/

#include <iostream>
#include <string>

using namespace std;

class Produkt {
private:
    string nazwa;
    double cena;
    int ilosc;

public:
    // Domyslny konstruktor
    Produkt() {
        // Inicjalizacja 'standardowa' - w ciele konstruktora
        nazwa = "brak";
        cena = 0.0;
        ilosc = 0;
        cout << "Konstruktor domyslny: " << nazwa << endl;
    }

    // Konstruktor z argumentami - inicjalizacja standardowa
    Produkt(string n, double c, int i) {
        nazwa = n;
        cena = c;
        ilosc = i;
        cout << "Konstruktor z argumentami (standardowy): " << nazwa << endl;
    }

    // Domyslny destruktor
    ~Produkt() {
        cout << "Destruktor: " << nazwa << endl;
    }

    void wyswietl() {
        cout << "  Nazwa: " << nazwa
             << ", Cena: " << cena
             << ", Ilosc: " << ilosc << endl;
    }
};

// Klasa z lista inicjalizacyjna
class Student {
private:
    string imie;
    string nazwisko;
    int wiek;
    double srednia;

public:
    // Domyslny konstruktor z lista inicjalizacyjna
    Student() : imie("brak"), nazwisko("brak"), wiek(0), srednia(0.0) {
        cout << "Konstruktor domyslny (lista inicjalizacyjna): "
             << imie << endl;
    }

    // Konstruktor z argumentami - lista inicjalizacyjna
    Student(string i, string n, int w, double s)
        : imie(i), nazwisko(n), wiek(w), srednia(s) {
        cout << "Konstruktor z argumentami (lista inicjalizacyjna): "
             << imie << " " << nazwisko << endl;
    }

    // Destruktor
    ~Student() {
        cout << "Destruktor Student: " << imie << " " << nazwisko << endl;
    }

    void wyswietl() {
        cout << "  " << imie << " " << nazwisko
             << ", wiek: " << wiek
             << ", srednia: " << srednia << endl;
    }
};

int main() {
    cout << "=== Klasa Produkt ===" << endl;

    cout << endl << "-- Konstruktor domyslny --" << endl;
    Produkt p1;
    p1.wyswietl();

    cout << endl << "-- Konstruktor z argumentami --" << endl;
    Produkt p2("Chleb", 4.99, 5);
    p2.wyswietl();

    cout << endl << "=== Klasa Student (lista inicjalizacyjna) ===" << endl;

    cout << endl << "-- Konstruktor domyslny --" << endl;
    Student s1;
    s1.wyswietl();

    cout << endl << "-- Konstruktor z argumentami --" << endl;
    Student s2("Jan", "Kowalski", 21, 4.5);
    s2.wyswietl();

    cout << endl << "--- Koniec main - destruktory zostana wywolane ---" << endl;

    return 0;
}
