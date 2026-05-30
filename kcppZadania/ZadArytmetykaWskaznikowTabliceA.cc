/*
Zadanie 3.8 (LArytmetykaWskaznikowTablice.cc)
-------------------------------------
Operacje na tablicy przy użyciu wskaźników
Napisz program, który:
- Zadeklaruje statyczną tablicę 10 liczb całkowitych i wypełni ją wartościami od 1 do 10.
- Używając wskaźników, obliczy i wyświetli sumę elementów tablicy.
- Znajdzie i wyświetli maksymalny element w tablicy używając arytmetyki wskaźników.
- Odwróci kolejność elementów w tablicy używając wyłącznie wskaźników (bez użycia indeksów []).
Nazwać program: ZadArytmetykaWskaznikowTabliceA.cc
*/

#include <iostream>

using namespace std;

int main() {
    // 1. Deklaracja i wypełnienie tablicy wartościami 1 - 10
    int tablica[10];
    for (int i = 0; i < 10; i++) {
        tablica[i] = i + 1; // Tablica ma wartości: 1, 2, 3, ..., 10
    }

    cout << "Oryginalna tablica: ";
    for (int i = 0; i < 10; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    // 2. Suma przy użyciu wskaźników
    int suma = 0;
    int* ptrSum = tablica; // Wskaźnik na początek tablicy
    int* ptrMax = tablica;

    // Do odwracania kolejności
    int* lewy = tablica;
    int* prawy = tablica + 9;

    for (int i = 0; i < 10; i++) {
        suma += *ptrSum; 
        ptrSum++;        
        if (*(tablica + i) > *ptrMax) {
            ptrMax = tablica + i; 
        }
    }

    while (lewy < prawy) {
        int temp = *lewy;
        *lewy = *prawy;
        *prawy = temp;
        // Przesunięcie wskaźników do środka
        lewy++;
        prawy--;
    }

    cout << "Suma elementow (wskaznikowo): " << suma << endl;
    cout << "Maksymalny element (wskaznikowo): " << *ptrMax << endl;
    cout << "Odwrocona tablica: ";
    int* ptrPrint = tablica;
    for (int i = 0; i < 10; i++) {
        cout << *ptrPrint << " ";
        ptrPrint++;
    }
    cout << endl;

    return 0;
}
