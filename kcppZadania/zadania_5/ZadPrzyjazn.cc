/*
Zadanie 5.5
--------------------------------------
Sprawdzic dzialanie przyjazni klas:
- Klasa B zaprzyjazniona z klasa A ma dostep do skladnikow prywatnych
- Czy klasa A w tym samym momencie moze byc takze zaprzyjazniona z klasa B?
  
Odpowiedz: Przyjazn NIE jest wzajemna (not mutual).
Jesli klasa A jest przyjacielom klasy B, to B nie staje sie automatycznie
przyjacielom A. Trzeba to zadeklarowac osobno w obu klasach.

- nazwij program: ZadPrzyjazn.cc
*/

#include <iostream>
#include <string>

using namespace std;

// Deklaracja klasy B z wyprzedzeniem (forward declaration)
class KlasaB;

class KlasaA {
private:
    int sekretnaDanaA;
    string nazwaA;

public:
    KlasaA(int d, string n) : sekretnaDanaA(d), nazwaA(n) {}

    // Klasa B jest przyjacielom klasy A - B ma dostep do prywatnych pol A
    friend class KlasaB;

    void wyswietl() {
        cout << "KlasaA: " << nazwaA << ", dana = " << sekretnaDanaA << endl;
    }

    // Ta funkcja probuje odczytac dane klasy B
    // BEZ zaprzyjaznenia - nie moze tego zrobic!
    // void odczytajB(const KlasaB& b) {
    //     cout << b.sekretnaDanaB; // BLAD kompilacji - brak dostepu
    // }
};

class KlasaB {
private:
    int sekretnaDanaB;
    string nazwaB;

public:
    KlasaB(int d, string n) : sekretnaDanaB(d), nazwaB(n) {}

    // Klasa B MA dostep do prywatnych danych klasy A (bo jest jej przyjacielom)
    void odczytajA(const KlasaA& a) {
        cout << "KlasaB odczytuje prywatne dane KlasyA:" << endl;
        cout << "  a.sekretnaDanaA = " << a.sekretnaDanaA << endl;
        cout << "  a.nazwaA = " << a.nazwaA << endl;
    }

    void wyswietl() {
        cout << "KlasaB: " << nazwaB << ", dana = " << sekretnaDanaB << endl;
    }
};

// ============================================
// Teraz pokaz wzajemna przyjazn (obie strony)
// ============================================

class KlasaD; // forward declaration

class KlasaC {
private:
    int danaC;

public:
    KlasaC(int d) : danaC(d) {}

    friend class KlasaD; // D moze czytac prywatne C

    // Funkcja zaprzyjazniona z klasy D
    void odczytajD(const KlasaD& d);
};

class KlasaD {
private:
    int danaD;

public:
    KlasaD(int d) : danaD(d) {}

    friend class KlasaC; // C moze czytac prywatne D

    void odczytajC(const KlasaC& c) {
        cout << "KlasaD odczytuje C.danaC = " << c.danaC << endl;
    }
};

// Definicja poza klasa (bo wymaga pelnej definicji KlasyD)
void KlasaC::odczytajD(const KlasaD& d) {
    cout << "KlasaC odczytuje D.danaD = " << d.danaD << endl;
}

int main() {
    cout << "=== Przyjazn jednokierunkowa ===" << endl;
    cout << "(B jest przyjacielom A, ale A NIE jest przyjacielom B)" << endl;

    KlasaA a(100, "obiektA");
    KlasaB b(200, "obiektB");

    a.wyswietl();
    b.wyswietl();
    b.odczytajA(a);  // OK - B ma dostep do prywatnych A

    // a.odczytajB(b); // BLAD - A nie ma dostepu do prywatnych B
    cout << "KlasaA NIE moze odczytac prywatnych danych KlasyB!" << endl;

    cout << endl << "=== Przyjazn wzajemna ===" << endl;
    cout << "(C i D sa nawzajem zaprzyjaznione)" << endl;

    KlasaC c(300);
    KlasaD d(400);

    d.odczytajC(c);  // OK - D czyta prywatne C
    c.odczytajD(d);  // OK - C czyta prywatne D

    cout << endl << "Wniosek: przyjazn NIE jest automatycznie wzajemna." << endl;
    cout << "Trzeba ja zadeklarowac w obu klasach osobno." << endl;

    return 0;
}
