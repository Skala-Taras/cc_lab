/*
 * Zad4_Parzysta.h - Zadanie 4.7: Sprawdzanie parzystosci
 */

#ifndef ZAD4_PARZYSTA_H
#define ZAD4_PARZYSTA_H

#include "ZadKcpp.h"

class Zad4_Parzysta : public ZadKcpp {
private:
    bool czyParzystaBitowo(int liczba);
    bool czyParzystaModulo(int liczba);
    bool czyParzystaWarunkowy(int liczba);

public:
    Zad4_Parzysta();
    void uruchom();
};

#endif
