/*
Zadanie 4.3
--------------------------------------
Napisz program:
- pokazujacy wykonanie tych samych operacji w C i C++
- nazwac program: ZadCandCPP.cc
*/

#include <iostream>  // C++
#include <cstdio>    // C (printf, scanf)
#include <cstring>   // C (strlen)
#include <string>    // C++ (std::string)
#include <cmath>     // C (pow, sqrt)

using namespace std;

int main() {
    // ===== Wypisywanie na ekran =====
    cout << "=== Wypisywanie ===" << endl;

    // Sposob C:
    printf("C:   Witaj swiecie! (printf)\n");
    // Sposob C++:
    cout << "C++: Witaj swiecie! (cout)" << endl;

    // ===== Formatowanie liczb =====
    cout << endl << "=== Formatowanie liczb ===" << endl;
    double pi = 3.14159265;

    // Sposob C:
    printf("C:   pi = %.4f\n", pi);
    // Sposob C++:
    cout << fixed;
    cout << "C++: pi = " << pi << endl;

    // ===== Operacje na napisach =====
    cout << endl << "=== Operacje na napisach ===" << endl;

    // Sposob C:
    char tekst_c[] = "Hello C";
    printf("C:   Napis: %s, dlugosc: %lu\n", tekst_c, strlen(tekst_c));

    // Sposob C++:
    string tekst_cpp = "Hello C++";
    cout << "C++: Napis: " << tekst_cpp << ", dlugosc: " << tekst_cpp.length() << endl;

    // ===== Operacje matematyczne =====
    cout << endl << "=== Operacje matematyczne ===" << endl;
    double x = 9.0;

    // Sposob C:
    printf("C:   sqrt(%.1f) = %.4f\n", x, sqrt(x));
    printf("C:   pow(%.1f, 2) = %.4f\n", x, pow(x, 2));

    // Sposob C++:
    cout << "C++: sqrt(" << x << ") = " << sqrt(x) << endl;
    cout << "C++: pow(" << x << ", 2) = " << pow(x, 2) << endl;

    return 0;
}
