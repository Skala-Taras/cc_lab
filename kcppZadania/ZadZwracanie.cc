#include <iostream>

using namespace std;

/**
 * 1. Zwracanie przez wartosc
 * Tworzona jest kopia zmiennej. Metoda najbezpieczniejsza.
 */
int zwrocWartosc() {
    int x = 10;
    return x;
}

/**
 * 2. Zwracanie przez referencje
 */
int& zwrocReferencje() {
    static int refVar = 20;
    return refVar;
}

/**
 * 3. Zwracanie przez wskaznik
 */
int* zwrocWskaznik() {
    static int ptrVar = 30;
    return &ptrVar;
}

/**
 * 4. Zwracanie tablicy
 */
int* zwrocTablice() {
    static int tablica[] = {100, 200, 300};
    return tablica; 
}

int main() {
    // 1. Wartosc
    int wartosc = zwrocWartosc();
    cout << "1. Wartosc:    " << wartosc << endl;

    // 2. Referencja
    int &ref = zwrocReferencje();
    cout << "2. Referencja: " << ref << endl;
    // Mozna zmienic wartosc przez referencje:
    ref = 25;
    cout << "   Ref po zmianie: " << zwrocReferencje() << endl;

    // 3. Wskaznik
    int *ptr = zwrocWskaznik();
    cout << "3. Wskaznik:   " << *ptr << " (pod adresem: " << ptr << ")" << endl;

    // 4. Tablica
    int *tab = zwrocTablice();
    cout << "4. Tablica:    [" << tab[0] << ", " << tab[1] << ", " << tab[2] << "]" << endl;

    return 0;
}
