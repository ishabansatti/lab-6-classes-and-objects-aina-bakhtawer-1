#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    Person() {
        name = "aina bakhtawer";
        age = 17;
    }
    Person(string n) {
        name = n;
        age = 0;
    }
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
   
    Person p1;               
    Person p2("masooma fatima");      
    Person p3("iza fatima", 21); 
    p1.display();
    p2.display();
    p3.display();
    return 0;
}