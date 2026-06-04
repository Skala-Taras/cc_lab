/*
 * Zad4_Petle.cc - Zadanie 4.9: Petle while, do-while, for
 */

#include "../include/Zad4_Petle.h"

Zad4_Petle::Zad4_Petle()
    : ZadKcpp("4.9 - Petle while/do-while/for", "Sekcja 4") {}

void Zad4_Petle::pokazWhile() {
    cout << "--- while z i++ ---" << endl;
    cout << "Liczby 1 do 5: ";
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    cout << "while z break na 3: ";
    i = 1;
    while (i <= 10) {
        if (i == 4) break;
        cout << i << " ";
        i++;
    }
    cout << endl;
}

void Zad4_Petle::pokazDoWhile() {
    cout << "--- do-while ---" << endl;
    cout << "Liczby 1 do 5: ";
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << endl;

    cout << "Wykonuje sie raz nawet gdy false: ";
    i = 100;
    do {
        cout << i << " ";
        i++;
    } while (i < 5);
    cout << endl;
}

void Zad4_Petle::pokazFor() {
    cout << "--- for ---" << endl;
    cout << "Liczby 1 do 5: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "for z continue (pomijamy 3): ";
    for (int i = 1; i <= 5; i++) {
        if (i == 3) continue;
        cout << i << " ";
    }
    cout << endl;
}

void Zad4_Petle::uruchom() {
    cout << "=== Zadanie 4.9: Petle ===" << endl;
    pokazWhile();
    pokazDoWhile();
    pokazFor();
}
