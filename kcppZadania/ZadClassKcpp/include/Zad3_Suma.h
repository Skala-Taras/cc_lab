/*
 * Zad3_Suma.h - Zadanie 3.2: Sumowanie elementow tablicy wskaznikami
 */

#ifndef ZAD3_SUMA_H
#define ZAD3_SUMA_H

#include "ZadKcpp.h"

class Zad3_Suma : public ZadKcpp {
private:
    int suma(int* tab, int rozmiar);

public:
    Zad3_Suma();
    void uruchom();
};

#endif
