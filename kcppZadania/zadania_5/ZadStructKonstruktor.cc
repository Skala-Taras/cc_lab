/*
Zadanie 5.4 (struktura)
--------------------------------------
Stworz strukture z przykladami konstruktorow i inicjalizacja zmiennych:
- domyslny konstruktor,
- domyslny destruktor,
- konstruktor z argumentami
- inicjalizacja zmiennych:
  - 'standardowa',
  - za pomoca listy inicjalizacyjnej
- nazwij program: ZadStructKonstruktor.cc
*/

#include <iostream>
#include <string>

using namespace std;

struct Adres {
    string ulica;
    string miasto;
    string kod;

    // Domyslny konstruktor - inicjalizacja standardowa
    Adres() {
        ulica = "brak";
        miasto = "brak";
        kod = "00-000";
        cout << "Konstruktor domyslny Adres" << endl;
    }

    // Konstruktor z argumentami - lista inicjalizacyjna
    Adres(string u, string m, string k) : ulica(u), miasto(m), kod(k) {
        cout << "Konstruktor Adres: " << ulica << ", " << miasto << endl;
    }

    // Destruktor
    ~Adres() {
        cout << "Destruktor Adres: " << miasto << endl;
    }

    void wyswietl() {
        cout << "  ul. " << ulica << ", " << kod << " " << miasto << endl;
    }
};

struct Pracownik {
    string imie;
    string nazwisko;
    int wiek;
    Adres adres;

    // Domyslny konstruktor - lista inicjalizacyjna
    Pracownik() : imie("brak"), nazwisko("brak"), wiek(0), adres() {
        cout << "Konstruktor domyslny Pracownik" << endl;
    }

    // Konstruktor z argumentami
    Pracownik(string i, string n, int w, Adres a)
        : imie(i), nazwisko(n), wiek(w), adres(a) {
        cout << "Konstruktor Pracownik: " << imie << " " << nazwisko << endl;
    }

    ~Pracownik() {
        cout << "Destruktor Pracownik: " << imie << endl;
    }

    void wyswietl() {
        cout << "  " << imie << " " << nazwisko << ", wiek: " << wiek << endl;
        cout << "  Adres: ";
        adres.wyswietl();
    }
};

int main() {
    cout << "=== Struktura Adres ===" << endl;

    cout << endl << "-- Konstruktor domyslny --" << endl;
    Adres a1;
    a1.wyswietl();

    cout << endl << "-- Konstruktor z argumentami --" << endl;
    Adres a2("Dluga 5", "Warszawa", "00-001");
    a2.wyswietl();

    cout << endl << "=== Struktura Pracownik ===" << endl;

    cout << endl << "-- Konstruktor domyslny --" << endl;
    Pracownik pr1;
    pr1.wyswietl();

    cout << endl << "-- Konstruktor z argumentami --" << endl;
    Adres adresPr("Krotka 10", "Krakow", "30-100");
    Pracownik pr2("Anna", "Nowak", 28, adresPr);
    pr2.wyswietl();

    cout << endl << "--- Koniec main - destruktory ---" << endl;

    return 0;
}
