/*
Zadanie 5.3
--------------------------------------
Pokaz dzialanie unii (niebezpieczenstwa, bledy)
- nazwij program: ZadUnia.cc
*/

#include <iostream>
#include <cstring>

using namespace std;

// Unia - wszystkie pola dziela ten sam obszar pamieci
union Dane {
    int calkowita;
    float zmiennoprzecinkowa;
    char znak;
    char napis[20];
};

int main() {
    Dane d;

    cout << "=== Dzialanie unii ===" << endl;
    cout << "Rozmiar unii Dane: " << sizeof(d) << " bajtow" << endl;
    cout << "(Rozmiar = rozmiar najwiekszego pola, tu char[20] = 20 bajtow)" << endl;

    // Zapisujemy liczbe calkowita
    d.calkowita = 42;
    cout << endl << "--- Po zapisaniu calkowita = 42 ---" << endl;
    cout << "d.calkowita = " << d.calkowita << endl;

    // NIEBEZPIECZENSTWO: odczyt innego pola niz ostatnio zapisane
    // daje niezdefiniowane/bezsensowne wyniki!
    cout << "d.zmiennoprzecinkowa = " << d.zmiennoprzecinkowa
         << "  <-- blad! odczytujemy float z danych int" << endl;
    cout << "d.znak = '" << d.znak
         << "'  <-- blad! odczytujemy char z danych int" << endl;

    // Zapisujemy float - nadpisuje poprzednia wartosc int
    d.zmiennoprzecinkowa = 3.14f;
    cout << endl << "--- Po zapisaniu zmiennoprzecinkowa = 3.14 ---" << endl;
    cout << "d.zmiennoprzecinkowa = " << d.zmiennoprzecinkowa << endl;
    cout << "d.calkowita = " << d.calkowita
         << "  <-- blad! int zostal nadpisany przez float" << endl;

    // Zapisujemy napis
    strcpy(d.napis, "hello");
    cout << endl << "--- Po zapisaniu napis = \"hello\" ---" << endl;
    cout << "d.napis = " << d.napis << endl;
    cout << "d.calkowita = " << d.calkowita
         << "  <-- blad! calkowite dane sa teraz czescia napisu" << endl;
    cout << "d.zmiennoprzecinkowa = " << d.zmiennoprzecinkowa
         << "  <-- blad! niezdefiniowana wartosc" << endl;

    // Pokazanie adresow pol - wszystkie sa takie same
    cout << endl << "--- Adresy pol w unii ---" << endl;
    cout << "Adres d.calkowita:           " << &d.calkowita << endl;
    cout << "Adres d.zmiennoprzecinkowa:  " << &d.zmiennoprzecinkowa << endl;
    cout << "Adres d.znak:                " << (void*)&d.znak << endl;
    cout << "Adres d.napis:               " << (void*)d.napis << endl;
    cout << "Wszystkie adresy sa takie same - pola dziela pamiec!" << endl;

    return 0;
}
