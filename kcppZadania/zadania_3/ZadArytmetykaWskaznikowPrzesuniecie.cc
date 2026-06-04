/*Napisz program do przesunięcie elementów tablicy o jedno miejsce w prawo
Napisz funkcję przesun, która przesuwa wszystkie elementy tablicy o jedno miejsce w prawo (ostatni element przechodzi na początek), wykorzystując wskaźniki.
Nazwa: ZadArytmetykaWskaznikowPrzesuniecie.cc
*/

#include <iostream>
using namespace std;

int* przesun(int *tablica, int rozmiar) {
    int lastEll = *(tablica + rozmiar - 1);
    for (int i = rozmiar - 1; i > 0; i--) {
        *(tablica + i) = *(tablica + i - 1);
    }
    *tablica = lastEll;
    return tablica;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    cout << "Wartosc pierwszego elementu: " << *tablica << endl;
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    int* firstEll = przesun(tablica, rozmiar);
    cout << "Wartosc pierwszego elementu po przesunięciu: " << *firstEll << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    return 0;
}