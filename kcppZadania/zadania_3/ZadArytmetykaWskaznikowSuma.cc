#include <iostream>

using namespace std;

int suma(int *wskaznikDoTablicy, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += *(wskaznikDoTablicy + i);
    }
    return suma;
}

int main(){
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    cout << "Suma elementow tablicy: " << suma(tablica, rozmiar) << endl;
    return 0;
}