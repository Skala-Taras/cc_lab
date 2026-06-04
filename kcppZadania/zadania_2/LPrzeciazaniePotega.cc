#include <iostream>

using namespace std;
    
int potega(int podstawa, int wykladnik) {
    int wynik = 1;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

double potega(double podstawa, int wykladnik) {
    double wynik = 1.0;
    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }
    return wynik;
}

int main() {
    int a = 2;
    double b = 2.5;
    int c = 3;
    cout << "Potega z liczby calkowitej: " << potega(a, c) << endl;
    cout << "Potega z liczby zmiennoprzecinkowej: " << potega(b, c) << endl;
    return 0;
}