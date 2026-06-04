/*
Zadanie 4.7
--------------------------------------
Napisz program sprawdzajacy czy liczba jest parzysta/nieparzysta:
- trzy funkcje:
  (a) sprawdzenie z wykorzystaniem operacji bitowych (&)
  (b) sprawdzenie z uyciem modulo
  (c) sprawdzenie z uzyciem operatora warunkowego zamiast if
- w kodzie funkcji (a) prosze rozpisac jako komentarz przykladowe sprawdzenie
- nazwac program: ZadParzysta.cc
*/

#include <iostream>

using namespace std;

// (a) Sprawdzenie bitowe
bool czyParzystaBitowo(int liczba) {
    /*
      Przyklad sprawdzenia bitowego dla liczby 4 i 5:

      4 w binarnym: 0100
      1 w binarnym: 0001
      4 & 1       = 0000  -> wynik 0, wiec 4 jest parzysta

      5 w binarnym: 0101
      1 w binarnym: 0001
      5 & 1       = 0001  -> wynik 1, wiec 5 jest nieparzysta

      Zasada: jesli ostatni bit liczby jest 0, to liczba jest parzysta.
      Operacja liczba & 1 sprawdza ostatni bit.
    */
    return (liczba & 1) == 0;
}

// (b) Sprawdzenie modulo
bool czyParzystaModulo(int liczba) {
    if (liczba % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

// (c) Sprawdzenie operatorem warunkowym (ternary)
bool czyParzystaWarunkowy(int liczba) {
    return (liczba % 2 == 0) ? true : false;
}

int main() {
    int testowe[] = {2, 7, 0, -4, 13};
    int ile = 5;

    cout << "=== Sprawdzanie parzystosci ===" << endl;

    for (int i = 0; i < ile; i++) {
        int n = testowe[i];
        cout << endl << "Liczba: " << n << endl;
        cout << "  (a) Bitowo:     " << (czyParzystaBitowo(n) ? "parzysta" : "nieparzysta") << endl;
        cout << "  (b) Modulo:     " << (czyParzystaModulo(n) ? "parzysta" : "nieparzysta") << endl;
        cout << "  (c) Warunkowy:  " << (czyParzystaWarunkowy(n) ? "parzysta" : "nieparzysta") << endl;
    }

    return 0;
}
