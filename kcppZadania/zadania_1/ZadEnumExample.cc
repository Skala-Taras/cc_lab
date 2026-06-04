#include <iostream>
using namespace std;


enum class e_months {
  January = 1,        
  February = 2,          
  March = 3,     
  April = 4,         
  May = 5,       
  June = 6,        
  July = 7, 
  August = 8,   
  September = 9,         
  October = 10,
  November = 11,
  December = 12
};


string getMonthName(e_months month) {
  switch (month) {
    case e_months::January: return "styczniu";
    case e_months::February: return "lutym";
    case e_months::March: return "marcu";
    case e_months::April: return "kwietniu";
    case e_months::May: return "maju";
    case e_months::June: return "czerwcu";
    case e_months::July: return "lipcu";
    case e_months::August: return "sierpniu";
    case e_months::September: return "wrzesniu";
    case e_months::October: return "pazdzierniku";
    case e_months::November: return "listopadzie";
    case e_months::December: return "grudniu";

    default: return "Nieznany miesiac";
  }
}


int main() {
  e_months month = e_months::April;
  if (month == e_months::May) {
    cout << "Doladnie moje urodziny sa w " << getMonthName(month) << "!" << endl;
  }
  else {
    cout << "Moje urodziny sa w " << getMonthName(e_months::May) << " a nie w " << getMonthName(month) << "!" << endl;
  }

  return 0;
}   