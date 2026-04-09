#include <iostream>
#include <vector>
using namespace std;

class KviJobVacancy{
  private:
    string JobTitle;
    int Salary;
    int VacationDays;
    vector<string> Requirements;
    
  public:
    KviJobVacancy() {
        cout << "Nowa oferta pracy stworzona!" << endl;
    }
    ~KviJobVacancy() {
        cout << "Oferta pracy usunieta lub zamknieta!" << endl;
    }

    void SetJobTitle(string jobTitle) { JobTitle = jobTitle; };
    void SetSalary(int salary) { Salary = salary; };
    void SetVacationDays(int vacationDays) { VacationDays = vacationDays; };
    void SetRequirements(vector<string> requirements) { Requirements = requirements; };

    string GetJobTitle() { return JobTitle; };
    int GetSalary() { return Salary; };
    int GetVacationDays() { return VacationDays; };
    void PrintRequirements() {
        cout << "Wymagania: " << endl;
        for (int i = 0; i < Requirements.size(); i++) {
            cout << Requirements[i] << ",";
        }
        cout << endl;
    };

    void PrintVacancy() {
        cout << "Oferta pracy: " << endl;
        cout << "Stanowisko: " << GetJobTitle() << endl;
        cout << "Pensja: " << GetSalary() << "zl/miesiac" << endl;
        cout << "Liczba dni urlopowych: " << GetVacationDays() << "dni w roku" << endl;
        PrintRequirements();
    };
};

int main() {
  KviJobVacancy cppDev;
  cppDev.SetJobTitle("C++ Developer");
  cppDev.SetSalary(10000);
  cppDev.SetVacationDays(20);
  cppDev.SetRequirements({"C++", "Git", "SQL", "CMake", "Linux"});
  cppDev.PrintVacancy();
  return 0;
}