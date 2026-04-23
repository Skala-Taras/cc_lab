#include <iostream>

using namespace std;

class Punkt {
public:
    double x;
    double y;
    Punkt(double _x, double _y) {
        x = _x; 
        y = _y; 
    }
    
    Punkt operator+(Punkt innyPunkt) {
        return Punkt(x + innyPunkt.x, y + innyPunkt.y);
    }
};

int main() {
    Punkt p1(1, 2);
    Punkt p2(3, 4);
    Punkt p3 = p1 + p2;
    cout << "Punkt p3: (" << p3.x << ", " << p3.y << ")" << endl;
    return 0;
}