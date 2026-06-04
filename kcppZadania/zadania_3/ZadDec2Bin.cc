/*
 * Zadanie 3.14: Konwersja liczby dziesietnej na binarna
 * Na podstawie LPrzeliczanieDec2BinB.cc
 */

#include <iostream>
#include <vector>

using namespace std;

void dec_to_bin(int liczba) {
    if (liczba == 0) {
        cout << 0;
        return;
    }

    vector<int> bity;
    while (liczba > 0) {
        bity.push_back(liczba % 2);
        liczba /= 2;
    }

    // Wypisujemy bity w odwrotnej kolejnosci
    for (int i = bity.size() - 1; i >= 0; i--) {
        cout << bity[i];
    }
}

int main() {
    int liczba;
    cout << "Podaj liczbe dziesietna (nieujemna): ";
    cin >> liczba;

    if (liczba < 0) {
        cout << "Blad: Liczba musi byc nieujemna!" << endl;
        return 1;
    }

    cout << liczba << " po zamianie na postac binarna: ";
    dec_to_bin(liczba);
    cout << endl;

    return 0;
}
