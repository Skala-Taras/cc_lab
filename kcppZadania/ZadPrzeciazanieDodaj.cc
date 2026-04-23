#include <iostream>

using namespace std;

int dodaj(int a, int b) {
    cout << "Dodaje dwie liczby calkowite: ";
    return a + b;
}

double dodaj(double a, double b) {
    cout << "Dodaje dwie liczby zmiennoprzecinkowe: ";
    return a + b;
}

string dodaj(string a, string b) {
    cout << "Konkatenacja dwoch napisow: ";
    return a + b;
}

int main() {
    cout << dodaj(1, 2) << endl;
    cout << dodaj(1.5, 2.5) << endl;
    cout << dodaj("Hello ", "World!") << endl;
    return 0;
}