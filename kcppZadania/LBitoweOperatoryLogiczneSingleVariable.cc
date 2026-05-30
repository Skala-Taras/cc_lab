/*
Zadanie 3.15 (LBitoweOperatoryLogiczneB.c i ..czneC.cc)
-------------------------------------
Proszę napisać samodziely program który jako argument będzie przyjmował tablice 8
elementową, gdzie na poszczególnych pozycjach tablicy będzie 0 lub 1. Program będzie
zwracał liczbę, która w formie binarnej będzie miała ustawione 1 na pozycjach odpowiadających
pozycjom 1 w tablicy. Wystarczy zmodyfikować program LBitoweOperatoryLogiczneC.cc
- nazwać program: LBitoweOperatoryLogiczneSingleVariable.cc
*/

#include <iostream>

using namespace std;

unsigned char konwertujTabliceNaLiczbe(const int tablica[8]) {
    unsigned char wynik = 0;
    
    for (int i=0; i < 8; i++) {
        if (tablica[i]) {
            wynik |= (1 << (7-i));
        }
    }
    return wynik;
}

int main() {
    int tablicaBinarne[8] = {1, 0, 1, 0, 1, 1, 0, 0}; 

    cout << "Tablica wejsciowa: ";
    for (int i = 0; i < 8; i++) {
        cout << tablicaBinarne[i] << " ";
    }
    cout << endl;

    unsigned char wynik = konwertujTabliceNaLiczbe(tablicaBinarne);
    cout << "Wynikowa liczba: " << (int)wynik << " (w formie binarnej odpowiada bitom z tablicy)" << endl;

    return 0;
}
