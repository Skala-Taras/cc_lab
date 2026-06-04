/*
Zadanie 4.14
------------------------------------
Zmodyfikuj program LWhileA.cc:
- zliczaj liczbe wprowadzonych wartosci
- sprawdzaj czy podana liczba jest dodatnia - jesli nie, wypisz komunikat
*/

#include <iostream>

using namespace std;

int main() {
    double liczba;
    double suma = 0;
    int licznik = 0;

    cout << "Podawaj liczby (wpisz 0 aby zakonczyc):" << endl;

    while (true) {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        if (liczba == 0) {
            break;
        }

        // Sprawdzenie czy liczba jest dodatnia
        if (liczba < 0) {
            cout << "Uwaga: podano liczbe ujemna (" << liczba
                 << "). Liczba zostanie dodana do sumy." << endl;
        }

        suma += liczba;
        licznik++;

        cout << "  Biezaca suma: " << suma
             << ", liczba wartosci: " << licznik << endl;
    }

    cout << endl << "=== Podsumowanie ===" << endl;
    cout << "Liczba wprowadzonych wartosci: " << licznik << endl;
    cout << "Suma: " << suma << endl;
    if (licznik > 0) {
        cout << "Srednia: " << suma / licznik << endl;
    }

    return 0;
}
