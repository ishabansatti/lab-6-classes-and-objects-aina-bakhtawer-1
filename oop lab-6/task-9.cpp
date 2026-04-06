#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    double balance;
    int pin;
public:
    BankAccount(string acc, double bal, int p) {
        accountNumber = acc;
        balance = bal;
        pin = p;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(double amount, int enteredPin) {
        if (enteredPin != pin) {
            cout << "Incorrect PIN!" << endl;
        }
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }
    double getBalance() const {
        return balance;
    }
};
int main() {
    BankAccount acc("12345", 1000.0, 1234);
    acc.deposit(50000);
    acc.withdraw(2500, 1357);   // correct pin
    acc.withdraw(3000, 1111);   // wrong pin
    cout << "Current Balance: " << acc.getBalance() << endl;
    return 0;
}