/*
Zadanie 4.15
------------------------------------
W programie LGra.cc:
- ogranicz liczbe prob do 10
- jesli gracz nie zgadnie, wyswietl prawidlowa liczbe
- dodaj poziomy trudnosci (zakres 1-50 dla latwego, 1-200 dla trudnego)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int poziom;
    int zakres;

    cout << "=== GRA: Zgadnij liczbe ===" << endl;
    cout << "Wybierz poziom trudnosci:" << endl;
    cout << "1 - Latwy (1-50)" << endl;
    cout << "2 - Trudny (1-200)" << endl;
    cout << "Wybor: ";
    cin >> poziom;

    if (poziom == 1) {
        zakres = 50;
    } else {
        zakres = 200;
    }

    int szukana = rand() % zakres + 1;
    int proba;
    int maxProb = 10;
    bool zgadl = false;

    cout << endl << "Zgadnij liczbe od 1 do " << zakres << "." << endl;
    cout << "Masz " << maxProb << " prob." << endl;

    for (int i = 1; i <= maxProb; i++) {
        cout << endl << "Proba " << i << "/" << maxProb << ": ";
        cin >> proba;

        if (proba == szukana) {
            cout << "Brawo! Zgadles za " << i << ". razem!" << endl;
            zgadl = true;
            break;
        } else if (proba < szukana) {
            cout << "Za malo!" << endl;
        } else {
            cout << "Za duzo!" << endl;
        }
    }

    if (!zgadl) {
        cout << endl << "Niestety, nie zgadles." << endl;
        cout << "Prawidlowa liczba to: " << szukana << endl;
    }

    return 0;
}
