#include <iostream>

using namespace std;

void wypiszTablice(int tablica[], int rozmiar) {
    cout << "Wewnatrz funkcji wypisuje elementy:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

int main() {
    int oryginalnaTablica[] = {10, 20, 30, 40, 50};
    int obliczonyRozmiar = sizeof(oryginalnaTablica) / sizeof(oryginalnaTablica[0]);
    cout << "Wysylam tablice o rozmiarze: " << obliczonyRozmiar << endl;
    wypiszTablice(oryginalnaTablica, obliczonyRozmiar);

    return 0;
}