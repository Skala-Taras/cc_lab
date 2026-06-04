/*
 * Zadanie 3.13: Priorytety operatorow w C++
 * Na podstawie LOperatorPriorytet.cc
 */

#include <iostream>

using namespace std;

int main() {
    cout << "=== Priorytety operatorow ===" << endl;

    int x = 1, y = 2, z = 3;
    int result[] = {4, 4, 4, 4};

    // Skomplikowane wyrazenie wyliczane wg priorytetow operatorow C++
    result[0] *= -++x * x-- + -y-- % ++z;
    cout << "0. Wynik bez nawiasow: " << result[0] << endl;

    // Reset zmiennych
    x = 1; y = 2; z = 3;
    result[1] *= -(++x) * (x--) + -(y--) % (++z);
    cout << "1. Wynik z nawiasami: " << result[1] << endl;

    // Reset zmiennych
    x = 1; y = 2; z = 3;
    result[2] *= (-(++x)) * (x--) + (-(y--)) % (++z);
    cout << "2. Wynik z innymi nawiasami: " << result[2] << endl;

    // Reset zmiennych
    x = 1; y = 2; z = 3;
    result[3] *= ((-(++x)) * (x--)) + ((-(y--)) % (++z));
    cout << "3. Wynik z jawnym grupowaniem: " << result[3] << endl;

    return 0;
}
