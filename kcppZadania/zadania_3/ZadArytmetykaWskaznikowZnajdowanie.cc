#include <iostream>

using namespace std;

int* maxElement(int *wskaznikTablica, int rozmiar) {
    int *wskaznikDoMaxElementu = wskaznikTablica;
    for (int i = 0; i < rozmiar; i++) {
        if (*(wskaznikTablica + i) > *wskaznikDoMaxElementu)
            wskaznikDoMaxElementu = wskaznikTablica + i;
    }

    return wskaznikDoMaxElementu;
}

int main() {

    int tablica[] = {1, 2, 3, 4, 5}; 
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    int *wskaznikNaMaxElement = maxElement(tablica, rozmiar);

    cout << *wskaznikNaMaxElement << endl;
    
    return 0;
}