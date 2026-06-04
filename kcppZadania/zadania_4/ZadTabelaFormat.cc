/*
Zadanie 4.4
--------------------------------------
Napisz program, ktory wyswietli tabele produktow w formacie:

| Nazwa          | Cena    | Ilosc |
|----------------|---------|-------|
| Chleb          |   4.99  |    5  |
| Mleko          |   3.20  |   10  |
| Jajka (10 szt) |   8.50  |    3  |

- Uzyj manipulatorow setw, left i right do wyrownania kolumn
- Ceny wyswietl z dokladnoscia do 2 miejsc po przecinku
- Szerokosc kolumn: Nazwa (15 znakow), Cena (8 znakow), Ilosc (7 znakow)
- nazwij program: ZadTabelaFormat.cc
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Dane produktow
    string nazwy[] = {"Chleb", "Mleko", "Jajka (10 szt)"};
    double ceny[] = {4.99, 3.20, 8.50};
    int ilosci[] = {5, 10, 3};
    int ile = 3;

    // Naglowek tabeli
    cout << "| " << left << setw(15) << "Nazwa"
         << "| " << right << setw(7) << "Cena" << " "
         << "| " << setw(5) << "Ilosc" << " |" << endl;

    cout << "|" << setfill('-') << setw(17) << ""
         << "|" << setw(9) << ""
         << "|" << setw(7) << "" << "|" << endl;
    cout << setfill(' '); // reset

    // Wiersze tabeli
    cout << fixed << setprecision(2);
    for (int i = 0; i < ile; i++) {
        cout << "| " << left << setw(15) << nazwy[i]
             << "| " << right << setw(7) << ceny[i] << " "
             << "| " << setw(5) << ilosci[i] << " |" << endl;
    }

    return 0;
}
