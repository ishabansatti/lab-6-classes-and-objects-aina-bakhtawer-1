#include <iostream>
using namespace std;
class MathConstants {
private:
    const double pi;
    const double e;
public:
    MathConstants() : pi(3.14159), e(2.71828) {}
    double getPi() const {
        return pi;
    }
    double getE() const {
        return e;
    }
};
int main() {
    const MathConstants mc;
    cout << "Pi: " << mc.getPi() << endl;
    cout << "e: " << mc.getE() << endl;
    return 0;
}