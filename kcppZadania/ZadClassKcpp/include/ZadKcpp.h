#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <iostream>
#include <string>

using namespace std;

class ZadKcpp {
protected:
    string nazwaZadania;
    string sekcja;

public:
    ZadKcpp(string nazwa, string sek);
    virtual ~ZadKcpp();

    virtual void uruchom() = 0;

    string pobierzNazwe();
    string pobierzSekcje();

    void wyswietlInfo();
};

#endif
