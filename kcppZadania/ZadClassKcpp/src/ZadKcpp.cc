/*
 * ZadKcpp.cc - Implementacja metod klasy bazowej ZadKcpp
 * Zadanie 6.1
 */

#include "../include/ZadKcpp.h"

ZadKcpp::ZadKcpp(string nazwa, string sek) : nazwaZadania(nazwa), sekcja(sek) {}

ZadKcpp::~ZadKcpp() {}

string ZadKcpp::pobierzNazwe() {
    return nazwaZadania;
}

string ZadKcpp::pobierzSekcje() {
    return sekcja;
}

void ZadKcpp::wyswietlInfo() {
    cout << "[" << sekcja << "] " << nazwaZadania << endl;
}
