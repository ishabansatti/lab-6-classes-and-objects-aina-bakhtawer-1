#include <iostream>
using namespace std;
class Book {
public:
    string title;
    string author;
    double price;
};
int main() {
    Book books[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Book " << i + 1 << endl;
        cout << "Title: ";
        cin >> books[i].title;
        cout << "Author: ";
        cin >> books[i].author;
        cout << "Price: ";
        cin >> books[i].price;
        cout << endl;
    }
    cout << "\nBook Details:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Book " << i + 1 << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Price: " << books[i].price << endl;
        cout << "-------------------" << endl;
    }
    return 0;
}