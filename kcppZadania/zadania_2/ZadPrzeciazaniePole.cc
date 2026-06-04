#include <iostream>
#include <cmath> 

using namespace std;

// 1. DLA KWADRATU
double pole(int a) {
    cout << "Licze pole kwadratu: ";
    return a * a;
}

// 2. DLA PROSTOKATA
double pole(double a, double b) {
    cout << "Licze pole prostokata: ";
    return a * b;
}

// 3. DLA KOLA 
double pole(double r) {
    cout << "Licze pole kola: ";
    return M_PI * r * r;
}

int main() {
    cout << pole(5) << endl;        // Wywola wersje dla kwadratu 
    cout << pole(5.0, 10.0) << endl; // Wywola wersje dla prostokata
    cout << pole(5.0) << endl;      // Wywola wersje dla kola 

    return 0;
}
