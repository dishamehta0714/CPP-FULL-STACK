#include <iostream>
using namespace std;

// Abstract class
class Bank {
protected:
    double balance;

public:
    Bank(double b) {
        balance = b;
    }

    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void credit(double amount) = 0;

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

// Derived class
class Account : public Bank {
public:
    Account(double b) : Bank(b) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void credit(double amount) {
        balance += amount;
        cout << "Credited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient Balance\n";
        }
    }
};

int main() {
    Account a(5000);

    a.showBalance();

    a.deposit(3000);
    a.credit(5000);
    a.withdraw(1000);

    a.showBalance();

    return 0;
}