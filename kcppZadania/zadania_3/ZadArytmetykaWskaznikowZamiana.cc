#include <iostream>

using namespace std;

void zamien(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "zamienione a: " << *a << endl;
    cout << "zamienione b: " << *b << endl;
}

int main(){
    int a = 5;
    int b = 6;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    zamien(&a, &b);
    return 0;
}