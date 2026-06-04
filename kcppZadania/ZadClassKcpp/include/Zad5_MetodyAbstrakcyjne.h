/*
 * Zad5_MetodyAbstrakcyjne.h - Zadanie 5.6: Figury geometryczne (obowiazkowe)
 */

#ifndef ZAD5_METODYABSTRAKCYJNE_H
#define ZAD5_METODYABSTRAKCYJNE_H

#include "ZadKcpp.h"
#include <cmath>

const double M_PI_VAL = 3.14159265;

// Klasa abstrakcyjna Figura
class Figura {
protected:
    string nazwaFigury;

public:
    Figura(string n) : nazwaFigury(n) {}
    virtual ~Figura() {}
    virtual double pole() = 0;
    virtual double obwod() = 0;
    virtual void wyswietl() = 0;
};

class FigKwadrat : public Figura {
private:
    double bok;
public:
    FigKwadrat(double b);
    double pole();
    double obwod();
    void wyswietl();
};

class FigProstokat : public Figura {
private:
    double bokA, bokB;
public:
    FigProstokat(double a, double b);
    double pole();
    double obwod();
    void wyswietl();
};

class FigTrojkat : public Figura {
private:
    double bokA, bokB, bokC, wysokosc;
public:
    FigTrojkat(double a, double b, double c, double h);
    double pole();
    double obwod();
    void wyswietl();
};

class FigKolo : public Figura {
private:
    double promien;
public:
    FigKolo(double r);
    double pole();
    double obwod();
    void wyswietl();
    double dystans(double metryNaOsobe);
};

// Klasa-wrapper dziedziczaca po ZadKcpp
class Zad5_MetodyAbstrakcyjne : public ZadKcpp {
public:
    Zad5_MetodyAbstrakcyjne();
    void uruchom();
};

#endif
