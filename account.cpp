#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum) {
        accountNumber = accNum;
        balance = 0;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void checkBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    string acc;
    cout << "Enter account number: ";
    cin >> acc;
    BankAccount myAccount(acc);

    myAccount.deposit(500);
    myAccount.checkBalance();

    myAccount.withdraw(200);
    myAccount.checkBalance();

    myAccount.withdraw(400);
    myAccount.checkBalance();

    return 0;
}
