#include <iostream>
using namespace std;

extern "C" void funkcja1() {
    cout << "Funkcja 1" << endl;
}

void funkcja2() {
    cout << "Funkcja 2" << endl;
}

extern "C" void funkcja3() {
    cout << "Funkcja 3" << endl;
}

void funkcja4() {
    cout << "Funkcja 4" << endl;
}

void funkcja5() {
    cout << "Funkcja 5" << endl;
}

int main(int argc, char* argv[]) {
    cout << "Liczba argumentow: " << argc << endl;
    for (int i = 0; i < argc; i++) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    };

    if (argc == 1) { cout << "Brak argumentow" << endl; return 1; };

    for (int i = 1; i < argc; i++) {
        string elemnt = argv[i];
        if (elemnt == "1") {
            funkcja1();
        } else if (elemnt == "2") {
            funkcja2();
        } else if (elemnt == "3") {
            funkcja3();
        } else if (elemnt == "4") {
            funkcja4();
        } else if (elemnt == "5") {
            funkcja5();
        }
    }
    return 0;
}