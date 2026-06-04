/*
Zadanie 4.12
-------------------------------------
Dodaj do programu LSilnia.cc sprawdzanie, czy podana liczba jest >= 0.
Zmodyfikuj program, aby obliczal sume silni od 1 do n.
*/

#include <iostream>

using namespace std;

// Obliczanie silni
long long silnia(int n) {
    long long wynik = 1;
    for (int i = 2; i <= n; i++) {
        wynik *= i;
    }
    return wynik;
}

int main() {
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;

    // Sprawdzenie czy liczba jest >= 0
    if (n < 0) {
        cout << "Blad: silnia jest zdefiniowana tylko dla liczb nieujemnych!" << endl;
        return 1;
    }

    cout << n << "! = " << silnia(n) << endl;

    // Suma silni od 1 do n
    long long suma = 0;
    cout << endl << "Suma silni od 1! do " << n << "!:" << endl;
    for (int i = 1; i <= n; i++) {
        long long s = silnia(i);
        cout << i << "! = " << s << endl;
        suma += s;
    }
    cout << "Suma = " << suma << endl;

    return 0;
}
