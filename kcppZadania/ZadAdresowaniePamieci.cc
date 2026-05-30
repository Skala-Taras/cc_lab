/*
Zadanie 3.7 (LArytmetykaWskaznikowZmienne.cc)
-------------------------------------
Kierunek adresowania pamięci 
- wyjaśnić w komentarzu do programu podającego przykład:
- wypisywanie adresów deklarowanych zmiennych
- nazwać program: ZadAdresowaniePamieci.cc
*/

#include <iostream>
#include <cstdint> 

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    cout << "Zmienna a: wartosc = " << a << ", adres (&a) = " << &a << endl;
    cout << "Zmienna b: wartosc = " << b << ", adres (&b) = " << &b << endl;
    cout << "Zmienna c: wartosc = " << c << ", adres (&c) = " << &c << endl;

    intptr_t adres_a = reinterpret_cast<intptr_t>(&a);
    intptr_t adres_b = reinterpret_cast<intptr_t>(&b);
    intptr_t adres_c = reinterpret_cast<intptr_t>(&c);

    cout << "\nMatematyczna roznica w adresach (w bajtach):" << endl;
    cout << "Adres A - Adres B: " << (adres_a - adres_b) << " bajtow" << endl;
    cout << "Adres B - Adres C: " << (adres_b - adres_c) << " bajtow" << endl;

    /*
      KOMENTARZ / WYJAŚNIENIE:
      
      Obserwując wyniki uruchomienia tego programu w Twoim środowisku:
      - Adres '&a' to np. 0x7fff20e74ba4
      - Adres '&b' to np. 0x7fff20e74ba8 (większy o 4 bajty)
      - Adres '&c' to np. 0x7fff20e74bac (większy o kolejne 4 bajty)

      Wniosek:
      Wydawać by się mogło, że stos rośnie w górę, ale w rzeczywistości kompilator GCC
      zoptymalizował ułożenie zmiennych lokalnych na stosie, wyrównując je w pamięci RAM
      w kolejności rosnącej. Na linux o architekturze x86-64 to adresy rosna w dół, 
      ale w tym konkretnym przypadku kompilator ustawił je w kolejności rosnącej, a różnica wynosi dokładnie 4 bajty (dla typu int).
    */

    return 0;
}
