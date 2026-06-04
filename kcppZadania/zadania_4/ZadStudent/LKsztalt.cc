/*
Zadanie 4.13
-------------------------------------
Zmodyfikuj program LKsztalt.cc, aby rysowal trojkat rownoboczny.
Dodaj petle, ktora narysuje "piramide" z liczb (np. 1, 2 2, 3 3 3).
*/

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Podaj wysokosc trojkata/piramidy: ";
    cin >> n;

    // Trojkat rownoboczny z gwiazdek
    cout << endl << "Trojkat rownoboczny:" << endl;
    for (int i = 1; i <= n; i++) {
        // Spacje przed gwiazdkami
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Gwiazdki
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Piramida z liczb
    cout << endl << "Piramida z liczb:" << endl;
    for (int i = 1; i <= n; i++) {
        // Spacje
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Liczby
        for (int j = 0; j < i; j++) {
            cout << i;
            if (j < i - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
