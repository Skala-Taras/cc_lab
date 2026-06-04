/*
Zadanie 4.2
--------------------------------------
Napisz program pokazujacy funkcjonalnosc:
- wypisywania na ekran (cout),
- zapisywanie do strumienia bledow (cerr)
- nazwac program: ZadCinCoutFile.cc
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // --- cout: standardowe wyjscie ---
    cout << "=== Standardowe wyjscie (cout) ===" << endl;
    cout << "To jest zwykla wiadomosc wypisana na cout." << endl;

    string imie;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Witaj, " << imie << "!" << endl;

    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    cout << "Podales liczbe: " << liczba << endl;
    cout << "Jej kwadrat to: " << liczba * liczba << endl;

    // --- cerr: strumien bledow ---
    cout << endl << "=== Strumien bledow (cerr) ===" << endl;
    cerr << "To jest wiadomosc bledu wypisana na cerr." << endl;

    if (liczba < 0) {
        cerr << "BLAD: Podano liczbe ujemna (" << liczba << ")!" << endl;
    } else {
        cerr << "INFO: Liczba jest poprawna (>= 0)." << endl;
    }

    // --- clog: buforowany strumien diagnostyczny ---
    cout << endl << "=== Strumien diagnostyczny (clog) ===" << endl;
    clog << "To jest wiadomosc diagnostyczna wypisana na clog." << endl;
    clog << "clog jest buforowany w przeciwienstwie do cerr." << endl;

    cout << endl << "Program zakonczony poprawnie." << endl;

    return 0;
}
