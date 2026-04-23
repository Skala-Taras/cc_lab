#include <iostream>
#include <array>

using namespace std;

void modyfikujKopie(array<int, 4> prawdzwaTablica) {
    prawdzwaTablica[0] = 999;
    cout << "Wewnatrz funkcji zmieniono oryginal[0] na " << prawdzwaTablica[0] << endl;
}

int main() {
    array<int, 4> oryginal = {1, 2, 3, 4};
    cout << "PRZED: Pierwszy element oryginalu to " << oryginal[0] << endl;
    modyfikujKopie(oryginal);
    cout << "PO: Pierwszy element oryginalu ulegl ZMIANIE: " << oryginal[0] << endl;

    return 0;
}
