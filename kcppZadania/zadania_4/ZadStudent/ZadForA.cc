/*
Zadanie 4.11
-------------------------------------
Zmodyfikuj program LFor.cc, aby wypisywal liczby nieparzyste zamiast parzystych.
Dodaj kolejna petle, ktora wypisze liczby podzielne przez 7.
Nazwij program: ZadStudent/ZadForA.cc
*/

#include <iostream>

using namespace std;

int main() {
    int n = 20;

    // Wypisywanie liczb nieparzystych od 1 do n
    cout << "Liczby nieparzyste od 1 do " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Wypisywanie liczb podzielnych przez 7 od 1 do 100
    int m = 100;
    cout << endl << "Liczby podzielne przez 7 od 1 do " << m << ":" << endl;
    for (int i = 7; i <= m; i += 7) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
