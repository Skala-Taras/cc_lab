/*
Zadanie 4.16
------------------------------------
Napisz program ZadStudent.cc - prosta baza studentow z std::vector:
- Dodaj studenta
- Usun studenta
- Wyswietl liste
- Sortuj liste (alfabetycznie)
- Sprawdz, czy student istnieje
- Przechowuj imie, nazwisko, numer indeksu (struct Student)
- Walidacja danych (imie nie puste, indeks unikalny)
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    string indeks;
};

// Wyswietlenie listy studentow
void wyswietlListe(const vector<Student>& studenci) {
    if (studenci.empty()) {
        cout << "Lista jest pusta." << endl;
        return;
    }
    cout << endl << "--- Lista studentow ---" << endl;
    for (int i = 0; i < (int)studenci.size(); i++) {
        cout << i + 1 << ". " << studenci[i].imie << " "
             << studenci[i].nazwisko << " (indeks: "
             << studenci[i].indeks << ")" << endl;
    }
    cout << endl;
}

// Sprawdzenie czy indeks jest unikalny
bool czyIndeksUnikalny(const vector<Student>& studenci, const string& indeks) {
    for (int i = 0; i < (int)studenci.size(); i++) {
        if (studenci[i].indeks == indeks) return false;
    }
    return true;
}

// Dodanie studenta
void dodajStudenta(vector<Student>& studenci) {
    Student s;
    cout << "Podaj imie: ";
    cin >> s.imie;
    if (s.imie.empty()) {
        cout << "Blad: imie nie moze byc puste!" << endl;
        return;
    }
    cout << "Podaj nazwisko: ";
    cin >> s.nazwisko;
    if (s.nazwisko.empty()) {
        cout << "Blad: nazwisko nie moze byc puste!" << endl;
        return;
    }
    cout << "Podaj numer indeksu: ";
    cin >> s.indeks;
    if (!czyIndeksUnikalny(studenci, s.indeks)) {
        cout << "Blad: student z indeksem " << s.indeks << " juz istnieje!" << endl;
        return;
    }
    studenci.push_back(s);
    cout << "Dodano studenta: " << s.imie << " " << s.nazwisko << endl;
}

// Usuniecie studenta po indeksie
void usunStudenta(vector<Student>& studenci) {
    string indeks;
    cout << "Podaj numer indeksu studenta do usuniecia: ";
    cin >> indeks;
    for (int i = 0; i < (int)studenci.size(); i++) {
        if (studenci[i].indeks == indeks) {
            cout << "Usunieto: " << studenci[i].imie << " " << studenci[i].nazwisko << endl;
            studenci.erase(studenci.begin() + i);
            return;
        }
    }
    cout << "Nie znaleziono studenta z indeksem: " << indeks << endl;
}

// Sortowanie alfabetyczne po nazwisku
void sortujListe(vector<Student>& studenci) {
    sort(studenci.begin(), studenci.end(),
         [](const Student& a, const Student& b) {
             if (a.nazwisko == b.nazwisko)
                 return a.imie < b.imie;
             return a.nazwisko < b.nazwisko;
         });
    cout << "Lista posortowana alfabetycznie." << endl;
}

// Sprawdzenie czy student istnieje
void sprawdzStudenta(const vector<Student>& studenci) {
    string nazwisko;
    cout << "Podaj nazwisko do wyszukania: ";
    cin >> nazwisko;
    for (int i = 0; i < (int)studenci.size(); i++) {
        if (studenci[i].nazwisko == nazwisko) {
            cout << "Znaleziono: " << studenci[i].imie << " "
                 << studenci[i].nazwisko << " (indeks: "
                 << studenci[i].indeks << ")" << endl;
            return;
        }
    }
    cout << "Nie znaleziono studenta o nazwisku: " << nazwisko << endl;
}

int main() {
    vector<Student> studenci;
    int wybor;

    do {
        cout << endl << "=== BAZA STUDENTOW ===" << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Usun studenta" << endl;
        cout << "3. Wyswietl liste" << endl;
        cout << "4. Sortuj liste" << endl;
        cout << "5. Sprawdz studenta" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor) {
            case 1: dodajStudenta(studenci); break;
            case 2: usunStudenta(studenci); break;
            case 3: wyswietlListe(studenci); break;
            case 4: sortujListe(studenci); break;
            case 5: sprawdzStudenta(studenci); break;
            case 0: cout << "Do widzenia!" << endl; break;
            default: cout << "Niepoprawny wybor!" << endl;
        }
    } while (wybor != 0);

    return 0;
}
