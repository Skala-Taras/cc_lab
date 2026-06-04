/*
 * Zad5_Klasa.cc - Zadanie 5.1: Klasa z sekcjami public/private/protected
 */

#include "../include/Zad5_Klasa.h"

// Klasa demonstracyjna wewnatrz pliku zrodlowego
class DemoKlasa {
public:
    string nazwaPublic;

    // Metoda zdefiniowana w klasie
    void ustawNazwe(string n) { nazwaPublic = n; }

    // Metoda deklarowana w klasie, definiowana ponizej
    void wyswietl();

    // Inline
    inline int pobierzWiek() { return wiek; }

    void ustawDane(string n, int w, string k) {
        nazwaPublic = n;
        wiek = w;
        kod = k;
    }

    // Metoda publiczna ktora ma dostep do private i protected
    void pokazWszystko() {
        cout << "Public:    " << nazwaPublic << endl;
        cout << "Protected: " << wiek << endl;
        cout << "Private:   " << kod << endl;
    }

protected:
    int wiek;

private:
    string kod;
};

void DemoKlasa::wyswietl() {
    cout << "Nazwa: " << nazwaPublic << ", wiek: " << wiek << endl;
}

Zad5_Klasa::Zad5_Klasa()
    : ZadKcpp("5.1 - Klasa z sekcjami public/private/protected", "Sekcja 5") {}

void Zad5_Klasa::uruchom() {
    cout << "=== Zadanie 5.1: Klasa z sekcjami ===" << endl;

    DemoKlasa obj;
    obj.ustawDane("Jan", 25, "XYZ-123");
    obj.wyswietl();
    obj.pokazWszystko();

    cout << "Wiek (inline): " << obj.pobierzWiek() << endl;

    // obj.wiek = 30;   // BLAD - protected, brak dostepu z zewnatrz
    // obj.kod = "abc";  // BLAD - private, brak dostepu z zewnatrz
    cout << "(protected i private nie sa dostepne spoza klasy)" << endl;
}
