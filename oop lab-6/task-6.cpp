#include <iostream>
using namespace std;
class Box {
public:
    double l, w, h;
    Box() : l(1), w(1), h(1) {}
    Box(double side) : l(side), w(side), h(side) {}
    Box(double a, double b, double c) : l(a), w(b), h(c) {}
    double volume() {
        return l * w * h;
    }
    void display() {
        cout << l << " x " << w << " x " << h 
             << "  Volume = " << volume() << endl;
    }
};
Box largerBox(Box a, Box b) {
    if (a.volume() > b.volume())
        return a;
    else
        return b;
}
int main() {
    Box b1(2, 3, 4);
    Box b2(3, 3, 3);
    Box result = largerBox(b1, b2);
    cout << "Larger Box Dimensions:\n";
    result.display();
    return 0;
}