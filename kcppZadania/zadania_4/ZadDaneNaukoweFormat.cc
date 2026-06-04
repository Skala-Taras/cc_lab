/*
Zadanie 4.6
--------------------------------------
Napisz program, ktory wyswietli stale matematyczne w trzech roznych formatach:
- domyslny, fixed, scientific
- precyzja 6 cyfr
- szerokosc kolumn: nazwa stalej (15 znakow), wartosci (20 znakow)
- naglowki kolumn wyrownaj do srodka (uzywajac spacji)
- nazwij program: ZadDaneNaukoweFormat.cc
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double pi = M_PI;            // 3.14159265...
    double e = M_E;              // 2.71828182...
    double phi = (1.0 + sqrt(5.0)) / 2.0;  // 1.61803398... (zloty podzial)

    // Naglowek - wyrownanie do srodka za pomoca spacji
    cout << left << setw(15) << "Stala"
         << setw(20) << "  Wartosc (domyslnie)"
         << setw(20) << "  Notacja stala"
         << setw(20) << "  Notacja naukowa" << endl;

    cout << left << setw(15) << "--------"
         << setw(20) << "  -----------------"
         << setw(20) << "  -------------"
         << setw(20) << "  --------------" << endl;

    // Tablica stalych
    string nazwy[] = {"Pi", "e", "Zloty podzial"};
    double wartosci[] = {pi, e, phi};

    for (int i = 0; i < 3; i++) {
        cout << left << setw(15) << nazwy[i];

        // Wartosc domyslna
        cout << defaultfloat << setprecision(6);
        cout << right << setw(20) << wartosci[i];

        // Notacja stala (fixed)
        cout << fixed << setprecision(6);
        cout << setw(20) << wartosci[i];

        // Notacja naukowa (scientific)
        cout << scientific << setprecision(6);
        cout << setw(20) << wartosci[i];

        cout << endl;
    }

    return 0;
}
