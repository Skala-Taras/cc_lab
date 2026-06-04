#include <iostream>
#include <string>
using namespace std;

  /* Zadanie podczas zajec
   *   Napisz funkcje (osobny program) w ktorym zadeklarujesz string i uzyjesz
   * na nim funkcji manipulacyjnych:
   *   1. empty()     Zwraca wartosc true jezeli napis jest pusty.
   *   2. size(),length()     Zwraca ilosc znakow w napisie.
   *   3. at()     Zwraca znak o podanym polozeniu, tak jak operator [], z tym
   * ze ta metoda jest bezpieczniejsza - wyrzuca wyjatek w przypadku wyjscia
   * poza zakres stringa.
   *   4. clear()     Usuwa wszystkie znaki z napisu.
   *   5. erase(...)     Usuwa wybrane znaki.
   *   6. find(...)     Znajduje podciag w ciagu, sa tez bardziej rozbudowane
   * funkcje tego typu.
   *   7. swap(...)     Zamienia miejscami dwa stringi, a staje sie b, a b staje
   * sie a.
   *   8. substr(...)     Zwraca podciag na podstawie indeksu poczatkowego i
   * dlugosci podciagu.
   *   9. append(...) */

   
void stringOperations(string text) {
    /**
     * @brief Performs various operations on a string.
     * 
     * @param text The string to perform operations on.
     */
    
    // 1. empty() - Zwraca wartosc true jezeli napis jest pusty.
    cout << "empty(): " << text.empty() << endl;

    // 2. size(),length() - Zwraca ilosc znakow w napisie.
    cout << "size(): " << text.size() << endl;
    cout << "length(): " << text.length() << endl;

    // 3. at() - Zwraca znak o podanym polozeniu, tak jak operator [], z tym
    // ze ta metoda jest bezpieczniejsza - wyrzuca wyjatek w przypadku wyjscia
    // poza zakres stringa.
    cout << "at(0): " << text.at(0) << endl;

    // 4. clear() - Usuwa wszystkie znaki z napisu.
    string stringForClearing = text;
    stringForClearing.clear();
    cout << "clear(): " << stringForClearing.length() << endl;

    // 5. erase(...) - Usuwa wybrane znaki.
    string stringForErasing = text;
    stringForErasing.erase(3, 1);
    cout << "erase(...): " << stringForErasing << endl;

    // 6. find(...) - Znajduje podciag w ciagu, sa tez bardziej rozbudowane
    // funkcje tego typu.
    cout << "find(...): " << text.find(" ") << endl;

    // 7. swap(...) - Zamienia miejscami dwa stringi, a staje sie b, a b staje
    // sie a.
    string textForSwap = text;
    string textForSwap1 = "Ala ma kota i ma psa";
    textForSwap.swap(textForSwap1);
    cout << "textForSwap: " << textForSwap << endl;
    cout << "textForSwap1: " << textForSwap1 << endl;

    // 8. substr(...) - Zwraca podciag na podstawie indeksu poczatkowego i
    // dlugosci podciagu.
    cout << "substr(...): " << text.substr(0, 3) << endl;

    // 9. append(...) - Dodaje podciag do stringa.
    cout << "append(...): " << text.append(" i ma psa") << endl;
}

/**
 * @brief Main function
 * 
 * @return int Returns 0 on successful execution.
 */
int main() {
    stringOperations("Ala ma kota");
    return 0;
}