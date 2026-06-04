/*
 * Zad3_Zamiana.h - Zadanie 3.1: Zamiana miejscami za pomoca wskaznikow
 */

#ifndef ZAD3_ZAMIANA_H
#define ZAD3_ZAMIANA_H

#include "ZadKcpp.h"

class Zad3_Zamiana : public ZadKcpp {
private:
    void zamien(int* a, int* b);

public:
    Zad3_Zamiana();
    void uruchom();
};

#endif
