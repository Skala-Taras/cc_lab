/*
 * Zadanie 2.6 (z gwiazdka == dla chetnych)
 * Napisz program przekazujacy tablice z zachowaniem rozmiaru.
 * Czy sie da?
 * Tak, w C++ mozna przekazac tablice przez referencje z zachowaniem rozmiaru (np. przy uzyciu szablonu).
 */

#include <iostream>

using namespace std;

// Szablon funkcji umozliwia przekazanie tablicy przez referencje 
// z zachowaniem informacji o jej rozmiarze (rozmiar N jest wyznaczany w czasie kompilacji)
template <size_t N>
void wypiszTablice(int (&tablica)[N]) {
    cout << "Wewnatrz funkcji. Rozmiar tablicy (N) = " << N << endl;
    cout << "sizeof(tablica) w bajtach: " << sizeof(tablica) << endl;
    cout << "Elementy tablicy: ";
    for (size_t i = 0; i < N; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    int oryginalnaTablica[] = {11, 22, 33, 44, 55, 66};
    size_t rozmiar = sizeof(oryginalnaTablica) / sizeof(oryginalnaTablica[0]);

    cout << "Wysylam tablice o rozmiarze: " << rozmiar << endl;
    wypiszTablice(oryginalnaTablica);

    return 0;
}
