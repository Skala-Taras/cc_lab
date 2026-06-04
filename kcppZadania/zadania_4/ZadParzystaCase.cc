/*
Zadanie 4.8
--------------------------------------
Napisz program z uzyciem 'switch' wybierajacy do wykonania
jedna z trzech funkcji z zadania ZadParzysta.cc:
- nazwac program: ZadParzystaCase.cc
*/

#include <iostream>

using namespace std;

// (a) Sprawdzenie bitowe
bool czyParzystaBitowo(int liczba) {
    return (liczba & 1) == 0;
}

// (b) Sprawdzenie modulo
bool czyParzystaModulo(int liczba) {
    return liczba % 2 == 0;
}

// (c) Sprawdzenie operatorem warunkowym
bool czyParzystaWarunkowy(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int liczba;
    int wybor;

    cout << "Podaj liczbe do sprawdzenia: ";
    cin >> liczba;

    cout << endl;
    cout << "Wybierz metode sprawdzenia:" << endl;
    cout << "1 - Bitowo (operator &)" << endl;
    cout << "2 - Modulo (%)" << endl;
    cout << "3 - Operator warunkowy (?:)" << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;

    bool wynik;

    switch (wybor) {
        case 1:
            cout << "Metoda: bitowa" << endl;
            wynik = czyParzystaBitowo(liczba);
            break;
        case 2:
            cout << "Metoda: modulo" << endl;
            wynik = czyParzystaModulo(liczba);
            break;
        case 3:
            cout << "Metoda: operator warunkowy" << endl;
            wynik = czyParzystaWarunkowy(liczba);
            break;
        default:
            cout << "Niepoprawny wybor!" << endl;
            return 1;
    }

    cout << "Liczba " << liczba << " jest "
         << (wynik ? "parzysta" : "nieparzysta") << "." << endl;

    return 0;
}
