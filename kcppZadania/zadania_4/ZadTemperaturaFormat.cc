/*
Zadanie 4.5
--------------------------------------
Napisz program, ktory wyswietli tabele konwersji temperatur
z Celsjusza na Fahrenheita od -10 do 10 stopni C (co 5 stopni)

- Uzyj fixed i setprecision dla temperatur w Fahrenheitach
- Liczby wyswietl z wiodacymi spacjami (dodatnie) lub minusem (ujemne)
- Wyrownaj liczby do prawej w kolumnach
- nazwij program: ZadTemperaturaFormat.cc
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Naglowek
    cout << right << setw(10) << "Celsjusz"
         << setw(15) << "Fahrenheit" << endl;

    cout << setw(10) << "-------"
         << setw(15) << "---------" << endl;

    // Konwersja: F = C * 9/5 + 32
    cout << fixed << setprecision(2);
    for (int c = -10; c <= 10; c += 5) {
        double f = c * 9.0 / 5.0 + 32.0;
        cout << right << setw(7) << c
             << setw(14) << f << endl;
    }

    return 0;
}
