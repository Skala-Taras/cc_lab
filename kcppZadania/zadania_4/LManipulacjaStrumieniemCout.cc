/*
Zadanie 4.1
--------------------------------------
Napisz program z przykladami manipulacji strumieniem cout:
- setw, setprecision, setfill, fixed, scientific, hex, dec... etc
- nazwac program LManipulacjaStrumieniemCout.cc
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Obliczenia - wyniki dzialania, nie sztucznie wstawione liczby
    double a = 15.0;
    double b = 7.0;
    double c = 3.0;

    double wynik = a / b;          // ~2.14286
    double output = a + b;         // 22.0
    double T_output = b / c;       // ~2.333

    double output1 = sqrt(a);      // ~3.8730
    double T_output1 = a * b / c;  // ~35.0

    double output2 = log(a);       // ~2.7081
    double T_output2 = (a + b) * c / b; // ~9.42857

    double average = (output + output1 + output2) / 3.0;
    double T_average = (T_output + T_output1 + T_output2) / 3.0;

    cout << "==================================================" << endl;
    cout << "Wynika naszego dzialania: " << wynik << " jest niepoprawny ale:" << endl;

    cout << fixed;
    cout << setprecision(3);
    cout << "   output:" << setw(9) << output
         << "    T:" << setw(7) << T_output << endl;

    cout << setprecision(4);
    cout << "   output1:" << setw(8) << output1
         << "   T:" << setw(10) << T_output1 << endl;

    cout << "   output2:" << setw(8) << output2
         << "   T:" << setw(10) << T_output2 << endl;

    cout << "   ---------------------------------" << endl;

    cout << "   average:" << setw(8) << average
         << "   T:" << setw(10) << T_average << endl;

    cout << "==================================================" << endl;

    // Dodatkowe przyklady manipulatorow
    cout << endl;
    cout << "--- Przyklad setfill ---" << endl;
    cout << setfill('*') << setw(20) << 42 << endl;
    cout << setfill(' '); // reset

    cout << "--- Przyklad hex/dec/oct ---" << endl;
    int val = 255;
    cout << "Dec: " << dec << val << endl;
    cout << "Hex: " << hex << val << endl;
    cout << "Oct: " << oct << val << endl;
    cout << dec; // reset

    cout << "--- Przyklad scientific ---" << endl;
    double pi = 3.14159265;
    cout << "Fixed:      " << fixed << setprecision(6) << pi << endl;
    cout << "Scientific: " << scientific << setprecision(6) << pi << endl;

    return 0;
}
