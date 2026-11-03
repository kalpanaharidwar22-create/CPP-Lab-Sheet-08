#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Private data member

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void displayBalance() {
        cout << "Current balance: " << balance << "\n";
    }
};

int main() {
    BankAccount account;
    double amount;

    cout << "Enter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);
    account.displayBalance();

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);
    account.displayBalance();

    return 0;
}
