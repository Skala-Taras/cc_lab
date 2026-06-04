/*
 * Zadanie 3.14: Konwersja liczby binarnej na dziesietna
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int bin_to_dec(const string& bin) {
    int wynik = 0;
    int potega = 0;

    // Iterujemy od konca napisu (od najmniej znaczacego bitu)
    for (int i = bin.length() - 1; i >= 0; i--) {
        if (bin[i] == '1') {
            wynik += pow(2, potega);
        } else if (bin[i] != '0') {
            // Walidacja - napotkano inny znak niz 0 lub 1
            cout << "Blad: Niepoprawny znak '" << bin[i] << "' w liczbie binarnej!" << endl;
            return -1;
        }
        potega++;
    }
    return wynik;
}

int main() {
    string bin;
    cout << "Podaj liczbe binarna: ";
    cin >> bin;

    if (bin.empty()) {
        cout << "Blad: Liczba binarna nie moze byc pusta!" << endl;
        return 1;
    }

    int dec = bin_to_dec(bin);
    if (dec != -1) {
        cout << bin << " po zamianie na postac dziesietna: " << dec << endl;
    } else {
        return 1;
    }

    return 0;
}
