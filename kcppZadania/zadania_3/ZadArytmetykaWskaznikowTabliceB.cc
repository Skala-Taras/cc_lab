/*
Zadanie 3.9 (LArytmetykaWskaznikowTablice.cc)
-------------------------------------
Operacje na dwóch tablicach z użyciem wskaźników
Napisz program, który:
- Zadeklaruje dwie tablice liczb zmiennoprzecinkowych o rozmiarze 5.
- Wypełni pierwszą tablicę wartościami podanymi przez użytkownika, a drugą tablicę wartościami pierwszej tablicy pomnożonymi przez 2 (używając wyłącznie wskaźników).
- Stworzy trzecią tablicę, która będzie zawierała sumy odpowiadających sobie elementów z dwóch pierwszych tablic (używając arytmetyki wskaźników).
- Wyświetli zawartość wszystkich trzech tablic, używając wskaźników do iteracji po elementach.
Nazwać program: ZadArytmetykaWskaznikowTabliceB.cc
*/

#include <iostream>

using namespace std;

int main() {
    const int rozmiar = 5;
    float tab1[rozmiar];
    float tab2[rozmiar];
    float tab3[rozmiar];
    float enteredNumber;

    cout << "Podaj 5 liczb zmiennoprzecinkowych:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        cin >> enteredNumber;
        *(tab1 + i) = enteredNumber;
        *(tab2 + i) = *(tab1 + i) * 2;
        *(tab3 + i) = *(tab1 + i) + *(tab2 + i);
    }

    cout << "Tablica 1: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << *(tab1 + i) << " ";
    }
    cout << endl;

    cout << "Tablica 2: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << *(tab2 + i) << " ";
    }
    cout << endl;

    cout << "Tablica 3: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << *(tab3 + i) << " ";
    }
    cout << endl;

    return 0;
}
