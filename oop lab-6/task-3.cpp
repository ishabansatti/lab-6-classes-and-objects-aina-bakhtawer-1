#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    double area() const {        // added const — good practice for read-only functions
        return length * width;
    }
};

void compare(Rectangle a, Rectangle b) {
    double area1 = a.area();
    double area2 = b.area();

    if (area1 > area2) {
        cout << "Rectangle A has larger area." << endl;
    } else if (area2 > area1) {
        cout << "Rectangle B has larger area." << endl;
    } else {
        cout << "Both rectangles have equal area." << endl;
    }
}

int main() {
    Rectangle r1, r2;

    cout << "Enter length and width of Rectangle A: ";
    cin >> r1.length >> r1.width;

    cout << "Enter length and width of Rectangle B: ";
    cin >> r2.length >> r2.width;

    compare(r1, r2);
    return 0;
}