/*
Zadanie 3.12 (LOperatoryPrzypisania.cc)
-------------------------------------
Napisać program z przykładami:
(1) operatorow arytmetycznych i (2) operatorow przypisania
(1) i (2) jako osobne funkcje: (1) OperatoryArytmetyczne (2) OperatoryPrzypisania
- nazwać program: ZadOperatoryPrzypisania.cc
*/

#include <iostream>

using namespace std;

// Demonstruje operatory arytmetyczne (+, -, *, /, %)
void OperatoryArytmetyczne() {
    cout << "=== (1) Operatory Arytmetyczne ===" << endl;
    
    int a = 10;
    int b = 3;

    cout << "Wartosci poczatkowe: a = " << a << ", b = " << b << endl << endl;

    // Zwykłe operacje arytmetyczne NIE zmieniają wartości zmiennej 'a' ani 'b'
    cout << "Dodawanie (a + b)     = " << (a + b) << endl;
    cout << "Odejmowanie (a - b)   = " << (a - b) << endl;
    cout << "Mnozenie (a * b)      = " << (a * b) << endl;
    cout << "Dzielenie int (a / b) = " << (a / b) << " (obcina czesc ulamkowa!)" << endl;
    cout << "Dzielenie float       = " << (static_cast<double>(a) / b) << " (po rzutowaniu na double)" << endl;
    cout << "Modulo (a % b)        = " << (a % b) << " (reszta z dzielenia 10 / 3)" << endl;

    cout << "\nSprawdzenie na koniec: a = " << a << ", b = " << b << " (wartosci sa nienaruszone!)" << endl;
}

// Demonstruje operatory przypisania (=, +=, -=, *=, /=, %=)
void OperatoryPrzypisania() {
    cout << "=== (2) Operatory Przypisania ===" << endl;
    
    int x = 10;
    cout << "Wartosc poczatkowa: x = " << x << endl << endl;

    // 1. Zwykłe przypisanie '='
    x = 20;
    cout << "Po x = 20;       -> x = " << x << endl;

    // 2. Dodanie i przypisanie '+='
    x += 5; // To samo co: x = x + 5
    cout << "Po x += 5;       -> x = " << x << " (bo 20 + 5)" << endl;

    // 3. Odjęcie i przypisanie '-='
    x -= 3; // To samo co: x = x - 3
    cout << "Po x -= 3;       -> x = " << x << " (bo 25 - 3)" << endl;

    // 4. Pomnożenie i przypisanie '*='
    x *= 2; // To samo co: x = x * 2
    cout << "Po x *= 2;       -> x = " << x << " (bo 22 * 2)" << endl;

    // 5. Podzielenie i przypisanie '/='
    x /= 4; // To samo co: x = x / 4
    cout << "Po x /= 4;       -> x = " << x << " (bo 44 / 4)" << endl;

    // 6. Modulo i przypisanie '%='
    x %= 3; // To samo co: x = x % 3
    cout << "Po x %= 3;       -> x = " << x << " (bo reszta z 11 / 3)" << endl;
}

int main() {
    OperatoryArytmetyczne();
    cout << endl;
    OperatoryPrzypisania();
    return 0;
}
