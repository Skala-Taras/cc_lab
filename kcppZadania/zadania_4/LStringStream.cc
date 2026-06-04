/*
Zadanie 4.0
--------------------------------------
Napisz program z przykładem zastosowania klasy stringstream z biblioteki sstream
- nazwać program LStringStream.cc
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string data; 
    cout << "Podaj date w takim formacie DD:MM:YYYY: ";
    cin >> data;

    stringstream ss(data);
    int day, month, year;
    char colon1, colon2;

    ss >> day >> colon1 >> month >> colon2 >> year;

    cout << "Dzien: " << day << endl;
    cout << "Miesiac: " << month << endl;
    cout << "Rok: " << year << endl;

    return 0;
}
