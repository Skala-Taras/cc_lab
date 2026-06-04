/*
Zadanie 4.11 (Preprocessor)
--------------------------------------
Napisz program pokazujacy zastosowanie dyrektywy preprocesora:
  '#ifdef' (#else)
  '#ifndef'
oraz
  '#define':
  (a) uzycie makra
  (b) uzycie '#' i '##'
  (a) i (b) stworz takze dla porownania bez dyrektywy preprocesora
- nazwac program: ZadPreprocesor.cc
*/

#include <iostream>
#include <string>

using namespace std;

// ===== (a) Makra #define =====

// Makro do obliczania kwadratu
#define KWADRAT(x) ((x) * (x))

// Makro do obliczania maksimum
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// ===== (b) Operatory # i ## =====

// Operator # - zamienia argument na string
#define DO_STRINGA(x) #x

// Operator ## - laczy dwa tokeny w jeden
#define POLACZ(a, b) a##b

// ===== #ifdef / #ifndef =====

#define DEBUG

#ifndef PI
#define PI 3.14159
#endif

// ===== Funkcje bez preprocesora (dla porownania) =====

// (a) Odpowiednik KWADRAT bez makra
int kwadratFunkcja(int x) {
    return x * x;
}

int maxFunkcja(int a, int b) {
    return (a > b) ? a : b;
}

// (b) Odpowiednik # bez makra - zwykla konwersja do stringa
string doStringaFunkcja(int x) {
    return to_string(x);
}

int main() {
    cout << "=== (a) Makra #define ===" << endl;

    // Uzycie makra KWADRAT
    cout << "Makro KWADRAT(5) = " << KWADRAT(5) << endl;
    cout << "Funkcja kwadratFunkcja(5) = " << kwadratFunkcja(5) << endl;

    // Uzycie makra MAX
    cout << "Makro MAX(10, 20) = " << MAX(10, 20) << endl;
    cout << "Funkcja maxFunkcja(10, 20) = " << maxFunkcja(10, 20) << endl;

    cout << endl << "=== (b) Operatory # i ## ===" << endl;

    // Operator # - zamiana na string
    cout << "Makro DO_STRINGA(hello) = " << DO_STRINGA(hello) << endl;
    cout << "Funkcja doStringaFunkcja(42) = " << doStringaFunkcja(42) << endl;

    // Operator ## - laczenie tokenow
    int zmiennaABC = 999;
    cout << "POLACZ(zmienna, ABC) = " << POLACZ(zmienna, ABC) << endl;
    // Bez makra: musielibysmy recznie napisac nazwe zmiennej

    cout << endl << "=== #ifdef / #ifndef ===" << endl;

#ifdef DEBUG
    cout << "DEBUG jest zdefiniowane - tryb debugowania aktywny." << endl;
#else
    cout << "DEBUG nie jest zdefiniowane - tryb produkcyjny." << endl;
#endif

#ifndef RELEASE
    cout << "RELEASE nie jest zdefiniowane." << endl;
#endif

    cout << "PI = " << PI << endl;

    return 0;
}
