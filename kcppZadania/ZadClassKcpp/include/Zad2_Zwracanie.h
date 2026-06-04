/*
 * Zad2_Zwracanie.h - Zadanie 2.1: Zwracanie przez wartosc, referencje, wskaznik, tablice
 */

#ifndef ZAD2_ZWRACANIE_H
#define ZAD2_ZWRACANIE_H

#include "ZadKcpp.h"

class Zad2_Zwracanie : public ZadKcpp {
private:
    int zwrocPrzezWartosc(int a, int b);
    int& zwrocPrzezReferencje(int& x);
    int* zwrocPrzezWskaznik(int* arr, int rozmiar);
    void zwrocTablice(int* src, int* dest, int rozmiar);

public:
    Zad2_Zwracanie();
    void uruchom();
};

#endif
