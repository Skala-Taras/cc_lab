/*
Zadanie 3.10 (LArytmetykaWskaznikowTablice.cc)
-------------------------------------
Pokazać w jakiej kolejności jest adresowana tablica dwuwymiarowa (Tab[3][3]).
Wypisać adresy poszczególnych elementów.
- nazwać program: ZadArytmetykaWskaznikowTablica2D.cc
*/

#include <iostream>

using namespace std;

int main() {
    int Tab[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "=== Adresowanie tablicy dwuwymiarowej 3x3 ===" << endl;

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout << "Tab[" << x << "][" << y << "] = " 
                 << *(*(Tab + x) + y) 
                 << " | Adres w pamieci: " << *(Tab + x) + y << endl;
        }
    }
    
    return 0;
}
