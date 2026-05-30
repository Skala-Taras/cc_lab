/*
Zadanie 3.11 (LArytmetykaWskaznikow.cc)
-------------------------------------
Co robią poniższe operacje? Napisać program który pokazuje ich działanie.
1. Funkcja1()
p++;
++p;
++*p;
++(*p);
++*(p);
*p++;
(*p)++;
*(p)++;
*++p;
*(++p);

oraz (Funkcja2()) w analogii do LArytmetykaWzkaznikowZmienne.cc aby wypisywał na ekran:

1.  A, B, C: 0  0   0
2.  A, B, C: 0  10  0
3.  A, B, C: 0  10  20
4.  A, B, C: 0  30  20
5.  A, B, C: 40 30  20
6.  A, B, C: 40 50  20
7.  A, B, C: 40 50  60
8.  A, B, C: 40 70  60
9.  A, B, C: 80 70  60
10. A, B, C: 80 90  60

przy początkowych wartościach zmiennych: int a = 0, b = 0, c = 0;
- nazwać program: ZadArytmetykaWskaznikow.cc
*/

#include <iostream>

using namespace std;

// Pomocnicza funkcja do resetowania tablicy i wskaźnika przed każdą demonstracją
void reset(int tab[5], int* &p) {
    tab[0] = 10; tab[1] = 20; tab[2] = 30; tab[3] = 40; tab[4] = 50;
    p = tab;
}

void Funkcja1() {
    int tab[5];
    int* p = nullptr;

    cout << "=== Funkcja1: Dzialanie operatorow ===" << endl;

    // 1. p++
    reset(tab, p);
    cout << "1. p++  | Przed: *p=" << *p << ", adres=" << p;
    p++;
    cout << " | Po: *p=" << *p << ", adres=" << p << endl;

    // 2. ++p
    reset(tab, p);
    cout << "2. ++p  | Przed: *p=" << *p << ", adres=" << p;
    ++p;
    cout << " | Po: *p=" << *p << ", adres=" << p << endl;

    // 3. ++*p
    reset(tab, p);
    cout << "3. ++*p | Przed: *p=" << *p << ", tab[0]=" << tab[0];
    ++*p;
    cout << " | Po: *p=" << *p << ", tab[0]=" << tab[0] << endl;

    // 4. ++(*p)
    reset(tab, p);
    cout << "4. ++(*p)| Przed: *p=" << *p << ", tab[0]=" << tab[0];
    ++(*p);
    cout << " | Po: *p=" << *p << ", tab[0]=" << tab[0] << endl;

    // 5. ++*(p)
    reset(tab, p);
    cout << "5. ++*(p)| Przed: *p=" << *p << ", tab[0]=" << tab[0];
    ++*(p);
    cout << " | Po: *p=" << *p << ", tab[0]=" << tab[0] << endl;

    // 6. *p++
    reset(tab, p);
    cout << "6. *p++ | Przed: *p=" << *p << ", adres=" << p;
    int val6 = *p++;
    cout << " | Zwraca: " << val6 << " | Po: *p=" << *p << ", adres=" << p << endl;

    // 7. (*p)++
    reset(tab, p);
    cout << "7. (*p)++| Przed: *p=" << *p << ", tab[0]=" << tab[0];
    int val7 = (*p)++;
    cout << " | Zwraca: " << val7 << " | Po: *p=" << *p << ", tab[0]=" << tab[0] << endl;

    // 8. *(p)++
    reset(tab, p);
    cout << "8. *(p)++| Przed: *p=" << *p << ", adres=" << p;
    int val8 = *(p)++;
    cout << " | Zwraca: " << val8 << " | Po: *p=" << *p << ", adres=" << p << endl;

    // 9. *++p
    reset(tab, p);
    cout << "9. *++p | Przed: *p=" << *p << ", adres=" << p;
    int val9 = *++p;
    cout << " | Zwraca: " << val9 << " | Po: *p=" << *p << ", adres=" << p << endl;

    // 10. *(++p)
    reset(tab, p);
    cout << "10.*(++p)| Przed: *p=" << *p << ", adres=" << p;
    int val10 = *(++p);
    cout << " | Zwraca: " << val10 << " | Po: *p=" << *p << ", adres=" << p << endl;
}

void Funkcja2() {
    int a = 0, b = 0, c = 0;
    
    int* pa = &a;
    int* pb = &b;
    int* pc = &c;

    cout << "=== Funkcja2: Sekwencja zmian ===" << endl;
    cout << "1.  A, B, C: " << *pa << "  " << *pb << "   " << *pc << endl;

    *pb = 10;
    cout << "2.  A, B, C: " << *pa << "  " << *pb << "  " << *pc << endl;

    *pc = 20;
    cout << "3.  A, B, C: " << *pa << "  " << *pb << "  " << *pc << endl;

    *pb = 30;
    cout << "4.  A, B, C: " << *pa << "  " << *pb << "  " << *pc << endl;

    *pa = 40;
    cout << "5.  A, B, C: " << *pa << " " << *pb << "  " << *pc << endl;

    *pb = 50;
    cout << "6.  A, B, C: " << *pa << " " << *pb << "  " << *pc << endl;

    *pc = 60;
    cout << "7.  A, B, C: " << *pa << " " << *pb << "  " << *pc << endl;

    *pb = 70;
    cout << "8.  A, B, C: " << *pa << " " << *pb << "  " << *pc << endl;

    *pa = 80;
    cout << "9.  A, B, C: " << *pa << " " << *pb << "  " << *pc << endl;

    *pb = 90;
    cout << "10. A, B, C: " << *pa << " " << *pb << "  " << *pc << endl;
}

int main() {
    Funkcja1();
    cout << endl;
    Funkcja2();
    return 0;
}
