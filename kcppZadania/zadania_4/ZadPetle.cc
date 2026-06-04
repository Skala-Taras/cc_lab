/*
Zadanie 4.9
--------------------------------------
Napisz program pokazujacy dzialanie instrukcji (kazda jako osobna funkcja):
(a) while    (pokazujace while z inkrementacja: i++, ++i)
(b) do-while (pokazujace do-while z inkrementacja: i++, ++i)
(c) for
- wykorzystaj: break, continue, return
- nazwac program: ZadPetle.cc
*/

#include <iostream>

using namespace std;

// (a) while loop demo
void pokazWhile() {
    cout << "=== (a) Petla while ===" << endl;

    // while z i++ (postinkrementacja)
    cout << "while z i++ (1 do 5): ";
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // while z ++i (preinkrementacja)
    cout << "while z ++i (0 do 4, ale wypisuje 1-5): ";
    i = 0;
    while (i < 5) {
        ++i;
        cout << i << " ";
    }
    cout << endl;

    // while z break
    cout << "while z break (przerywamy na 3): ";
    i = 1;
    while (i <= 10) {
        if (i == 4) break;
        cout << i << " ";
        i++;
    }
    cout << endl;

    // while z continue
    cout << "while z continue (pomijamy 3): ";
    i = 0;
    while (i < 6) {
        i++;
        if (i == 3) continue;
        cout << i << " ";
    }
    cout << endl << endl;
}

// (b) do-while loop demo
void pokazDoWhile() {
    cout << "=== (b) Petla do-while ===" << endl;

    // do-while z i++
    cout << "do-while z i++ (1 do 5): ";
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << endl;

    // do-while z ++i
    cout << "do-while z ++i (0 do 4): ";
    i = 0;
    do {
        cout << i << " ";
        ++i;
    } while (i < 5);
    cout << endl;

    // do-while wykonuje sie co najmniej raz
    cout << "do-while wykonuje sie raz nawet gdy warunek jest false: ";
    i = 100;
    do {
        cout << i << " ";
        i++;
    } while (i < 5);
    cout << endl << endl;
}

// (c) for loop demo
void pokazFor() {
    cout << "=== (c) Petla for ===" << endl;

    // Zwykly for
    cout << "for (1 do 5): ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // for z continue
    cout << "for z continue (pomijamy 4): ";
    for (int i = 1; i <= 6; i++) {
        if (i == 4) continue;
        cout << i << " ";
    }
    cout << endl;

    // for z break
    cout << "for z break (przerywamy na 4): ";
    for (int i = 1; i <= 10; i++) {
        if (i == 4) break;
        cout << i << " ";
    }
    cout << endl;

    // for z return - konczy cala funkcje
    cout << "for z return (konczymy funkcje na i==3): ";
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            cout << endl;
            return; // konczy cala funkcje pokazFor
        }
        cout << i << " ";
    }
}

int main() {
    pokazWhile();
    pokazDoWhile();
    pokazFor();

    cout << endl << "Program zakonczony." << endl;

    return 0;
}
