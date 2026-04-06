#include <iostream>
using namespace std;
struct Address {
    string street;
    string city;
    int postalCode;
};
class Hospital {
private:
    string name;
    Address location;
public:
    Hospital(string n, string s, string c, int p) {
        name = n;
        location.street = s;
        location.city = c;
        location.postalCode = p;
    }
    void display() {
        cout << "Hospital Name: " << name << endl;
        cout << "Street: " << location.street << endl;
        cout << "City: " << location.city << endl;
        cout << "Postal Code: " << location.postalCode << endl;
    }
};
int main() {
    Hospital h1("CMH Hospital", "Cantt", "lahore", 54000);
    h1.display();
    return 0;
}