#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:

    BankAccount(int accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited:" << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew:" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    void displayAccountInfo() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance:" << balance << endl;
    }
};

int main() {
    
    BankAccount myAccount(12345, 1000.0);
    myAccount.displayAccountInfo();
    myAccount.deposit(500.0);
    myAccount.displayAccountInfo();
    myAccount.withdraw(200.0);
    myAccount.displayAccountInfo();
    myAccount.withdraw(1500.0);
    myAccount.displayAccountInfo();

    return 0;
}

