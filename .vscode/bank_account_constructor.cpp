#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    // Constructor runs automatically when an object is created
    BankAccount(const string& accountOwner, double initialBalance)
        : owner(accountOwner), balance(initialBalance) {
        cout << "Account created for " << owner << " with balance Rs." << balance << endl;
    }

    // Deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited Rs." << amount << " | New balance: Rs." << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Display current account details
    void showBalance() const {
        cout << "Owner: " << owner << " | Current Balance: Rs." << balance << endl;
    }

    // Destructor runs automatically when the object goes out of scope
    ~BankAccount() {
        cout << "Account object for " << owner << " destroyed." << endl;
    }
};

int main() {
    // Constructor is called automatically with arguments
    BankAccount acc1("Pranav", 5000.0);
    acc1.deposit(1500.0);
    acc1.showBalance();

    // Destructor will be called automatically when main() ends
    return 0;
}