/*
 * main.cc - Zadanie 6.1
 * Program z interaktywnym menu do wyboru zadan.
 * Klasa nadrzedna: ZadKcpp
 * 10 wybranych zadan jako klasy dziedziczace.
 */

#include "include/ZadKcpp.h"
#include "include/Zad1_ClassExample.h"
#include "include/Zad2_Zwracanie.h"
#include "include/Zad2_PrzeciazaniePole.h"
#include "include/Zad3_Zamiana.h"
#include "include/Zad3_Suma.h"
#include "include/Zad4_Temperatura.h"
#include "include/Zad4_Parzysta.h"
#include "include/Zad4_Petle.h"
#include "include/Zad5_Klasa.h"
#include "include/Zad5_MetodyAbstrakcyjne.h"

#include <iostream>

using namespace std;

void wyswietlMenu() {
    cout << endl;
    cout << "========================================" << endl;
    cout << "      MENU GLOWNE - ZadKcpp" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << " --- Sekcja 1: Funkcja main ---" << endl;
    cout << "  1. Zad 1.1 - Prosty program z klasa" << endl;
    cout << endl;
    cout << " --- Sekcja 2: Zwracanie przez funkcje ---" << endl;
    cout << "  2. Zad 2.1 - Zwracanie (wartosc/referencja/wskaznik)" << endl;
    cout << "  3. Zad 2.2 - Przeciazanie funkcji pole()" << endl;
    cout << endl;
    cout << " --- Sekcja 3: Arytmetyka wskaznikow ---" << endl;
    cout << "  4. Zad 3.1 - Zamiana miejscami (wskazniki)" << endl;
    cout << "  5. Zad 3.2 - Suma tablicy (wskazniki)" << endl;
    cout << endl;
    cout << " --- Sekcja 4: Operacje wejscia/wyjscia ---" << endl;
    cout << "  6. Zad 4.5 - Tabela konwersji temperatur" << endl;
    cout << "  7. Zad 4.7 - Sprawdzanie parzystosci" << endl;
    cout << "  8. Zad 4.9 - Petle (while/do-while/for)" << endl;
    cout << endl;
    cout << " --- Sekcja 5: Klasy ---" << endl;
    cout << "  9. Zad 5.1 - Klasa z sekcjami (public/private/protected)" << endl;
    cout << " 10. Zad 5.6 - Metody abstrakcyjne (Figury)" << endl;
    cout << endl;
    cout << "  0. Wyjscie" << endl;
    cout << "========================================" << endl;
    cout << "Wybierz zadanie: ";
}

int main() {
    // Tablica wskaznikow na obiekty ZadKcpp
    ZadKcpp* zadania[10];

    zadania[0] = new Zad1_ClassExample();
    zadania[1] = new Zad2_Zwracanie();
    zadania[2] = new Zad2_PrzeciazaniePole();
    zadania[3] = new Zad3_Zamiana();
    zadania[4] = new Zad3_Suma();
    zadania[5] = new Zad4_Temperatura();
    zadania[6] = new Zad4_Parzysta();
    zadania[7] = new Zad4_Petle();
    zadania[8] = new Zad5_Klasa();
    zadania[9] = new Zad5_MetodyAbstrakcyjne();

    int wybor;

    do {
        wyswietlMenu();
        cin >> wybor;

        if (wybor >= 1 && wybor <= 10) {
            cout << endl;
            zadania[wybor - 1]->uruchom();
            cout << endl << "--- Nacisnij Enter aby kontynuowac ---" << endl;
            cin.ignore();
            cin.get();
        } else if (wybor != 0) {
            cout << "Niepoprawny wybor!" << endl;
        }
    } while (wybor != 0);

    cout << "Do widzenia!" << endl;

    // Zwolnienie pamieci
    for (int i = 0; i < 10; i++) {
        delete zadania[i];
    }

    return 0;
}
