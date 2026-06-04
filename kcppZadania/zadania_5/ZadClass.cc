/*
Zadanie 5.1
--------------------------------------
Napisz prosty program z klasa:
- metody deklarowane i definiowane w klasie
- metody deklarowane w klasie, a definiowane poza klasa
- zastosowanie 3 sekcji: public, private, protected
- zmienne w kazdej z sekcji
- funkcje, ktore maja dostep do zmiennych z sekcji protected i private
- funkcje inline
- nazwij program: ZadClass.cc
*/

#include <iostream>
#include <string>

using namespace std;

class Samochod {
public:
    string marka;     // zmienna publiczna
    int rok;          // zmienna publiczna

    // Metoda zdefiniowana w klasie
    void wyswietl() {
        cout << "Marka: " << marka << ", Rok: " << rok
             << ", Przebieg: " << przebieg
             << ", VIN: " << vin << endl;
    }

    // Metoda deklarowana w klasie, definiowana poza
    void ustawPrzebieg(int km);
    int pobierzPrzebieg();

    // Funkcja inline
    inline void info() {
        cout << "[INFO] Samochod: " << marka << endl;
    }

    // Metoda majaca dostep do private i protected
    void pokazWszystko();

protected:
    int przebieg;      // zmienna protected

    // Metoda protected - dostepna w klasach pochodnych
    void resetPrzebieg() {
        przebieg = 0;
    }

private:
    string vin;        // zmienna private

    // Metoda prywatna
    void generujVin() {
        vin = "VIN-" + marka + "-" + to_string(rok);
    }

    // Funkcja zaprzyjazniona moze miec dostep do private
    friend void pokazVin(const Samochod& s);
};

// Definicje metod poza klasa
void Samochod::ustawPrzebieg(int km) {
    if (km >= 0) {
        przebieg = km;
    } else {
        cout << "Blad: przebieg nie moze byc ujemny!" << endl;
    }
}

int Samochod::pobierzPrzebieg() {
    return przebieg;
}

void Samochod::pokazWszystko() {
    generujVin();  // dostep do metody private z wnetrza klasy
    cout << "Publiczne  - marka: " << marka << ", rok: " << rok << endl;
    cout << "Protected  - przebieg: " << przebieg << endl;
    cout << "Private    - vin: " << vin << endl;
}

// Funkcja zaprzyjazniona - ma dostep do private
void pokazVin(const Samochod& s) {
    cout << "Funkcja zaprzyjazniona - VIN: " << s.vin << endl;
}

// Klasa dziedziczaca - ma dostep do public i protected, ale nie do private
class SamochodSportowy : public Samochod {
public:
    int moc;  // konie mechaniczne

    void wyswietlSportowy() {
        cout << "Sportowy: " << marka << ", moc: " << moc << " KM"
             << ", przebieg: " << przebieg << " km" << endl;
        // cout << vin; // BLAD! - private nie jest dostepne w klasie pochodnej
    }

    void zresetujPrzebieg() {
        resetPrzebieg();  // protected metoda - dostepna w klasie pochodnej
        cout << "Przebieg zresetowany do 0." << endl;
    }
};

int main() {
    cout << "=== Klasa Samochod ===" << endl;

    Samochod auto1;
    auto1.marka = "Toyota";
    auto1.rok = 2020;
    auto1.ustawPrzebieg(55000);

    auto1.wyswietl();
    auto1.info();
    auto1.pokazWszystko();

    cout << "Przebieg: " << auto1.pobierzPrzebieg() << " km" << endl;

    // Funkcja zaprzyjazniona
    pokazVin(auto1);

    cout << endl << "=== Klasa SamochodSportowy (dziedziczenie) ===" << endl;

    SamochodSportowy sport;
    sport.marka = "Ferrari";
    sport.rok = 2023;
    sport.moc = 670;
    sport.ustawPrzebieg(12000);

    sport.wyswietlSportowy();
    sport.zresetujPrzebieg();
    sport.wyswietlSportowy();

    return 0;
}
