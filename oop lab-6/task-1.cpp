#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area();
    double circumference();
};
double Circle::area() {
    return 3.14159 * radius * radius;
}
double Circle::circumference() {
    return 2 * 3.14159 * radius;
}
int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;
    Circle c(r);
    cout << "Area: " << c.area() << endl;
    cout << "Circumference: " << c.circumference() << endl;
    return 0;
}