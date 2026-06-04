/*
 * Zad2_PrzeciazaniePole.h - Zadanie 2.2: Przeciazanie funkcji pole()
 */

#ifndef ZAD2_PRZECIAZANIEPOLE_H
#define ZAD2_PRZECIAZANIEPOLE_H

#include "ZadKcpp.h"

class Zad2_PrzeciazaniePole : public ZadKcpp {
private:
    double pole(double bok);
    double pole(double a, double b);
    double poleKola(double promien);

public:
    Zad2_PrzeciazaniePole();
    void uruchom();
};

#endif
