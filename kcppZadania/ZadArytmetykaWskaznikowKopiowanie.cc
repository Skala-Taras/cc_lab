/*
Zadanie 3.6
-------------------------------------
Napisz program do kopiowanie tablicy przy użyciu wskaźników.
Napisz funkcję kopiujTablice, która kopiuje jedną tablicę do drugiej, korzystając wyłącznie ze wskaźników.
Nazwa: ZadArytmetykaWskaznikowKopiowanie.cc
*/

#include <iostream>

using namespace std;

// Rozwiązanie przy użyciu bezpośredniej inkrementacji wskaźników przekazanych w argumencie
void kopiujTablice(const int* zrodlo, int* cel, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        *cel = *zrodlo;
        zrodlo++; 
        cel++;   
    }
}

int main() {
    const int rozmiar = 5;
    int tablicaZrodlowa[rozmiar] = {10, 20, 30, 40, 50};
    int tablicaDocelowa[rozmiar] = {0};

    cout << "Przed kopiowaniem tablica docelowa: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tablicaDocelowa[i] << " ";
    }
    cout << endl;

    kopiujTablice(tablicaZrodlowa, tablicaDocelowa, rozmiar);

    cout << "Po kopiowaniu tablica docelowa: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tablicaDocelowa[i] << " ";
    }
    cout << endl;

    return 0;
}
