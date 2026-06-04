/*
Zadanie 4.10
--------------------------------------
Napisz program wykorzystujacy instrukcje 'switch' gdzie:
- zamiast pojedynczego znaku bedzie sprawdzane cale slowo
  (czy da sie to zrobic bezposrednio? - NIE, switch w C++ dziala
   tylko na typach calkowitych, nie na std::string)
- program moze byc uszczegolowieniem ZadParzystaCase.cc
- nazwac program: ZadSwitch.cc
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
      UWAGA: W C++ instrukcja switch NIE moze dzialac bezposrednio
      na typie std::string. Switch wymaga typow calkowitych (int, char, enum).
      
      Rozwiazanie: uzycie lancucha if-else if
      lub mapowanie stringow na wartosci calkowite.
    */

    string komenda;
    cout << "Dostepne komendy: bitowo, modulo, warunkowy, pomoc, wyjscie" << endl;
    cout << "Podaj komende: ";
    cin >> komenda;

    int liczba = 0;

    // Nie da sie uzyc switch na string, wiec uzywamy if-else
    if (komenda == "bitowo") {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        bool wynik = (liczba & 1) == 0;
        cout << liczba << " jest " << (wynik ? "parzysta" : "nieparzysta")
             << " (metoda bitowa)" << endl;

    } else if (komenda == "modulo") {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        bool wynik = (liczba % 2 == 0);
        cout << liczba << " jest " << (wynik ? "parzysta" : "nieparzysta")
             << " (metoda modulo)" << endl;

    } else if (komenda == "warunkowy") {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        string opis = (liczba % 2 == 0) ? "parzysta" : "nieparzysta";
        cout << liczba << " jest " << opis
             << " (operator warunkowy)" << endl;

    } else if (komenda == "pomoc") {
        cout << "Program sprawdza parzystosc liczby trzema metodami." << endl;
        cout << "Uzyj jednej z komend: bitowo, modulo, warunkowy" << endl;

    } else if (komenda == "wyjscie") {
        cout << "Koniec programu." << endl;

    } else {
        cout << "Nieznana komenda: " << komenda << endl;
    }

    return 0;
}
