#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    string accountNumber;
    float accountBalance;

public:
    BankAccount(string name, string number, float balance = 0.0) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;
    }

    float deposit(float amount) {
        if (amount <= 0) {
            cout << "Transaction failed. Kindly deposit a valid amount" << endl;
        } else {
            accountBalance += amount;
        }
        return accountBalance;
    }

    float withdraw(float amount) {
        if (amount <= 0) {
            cout << "Transaction failed. Kindly withdraw a valid amount" << endl;
        } else if (amount > accountBalance) {
            cout << "Insufficient balance" << endl;
        } else {
            accountBalance -= amount;
        }
        return accountBalance;
    }

    void display() {
        cout << "Account holder name : " << accountHolderName << endl;
        cout << "Account Number      : " << accountNumber << endl;
        cout << "Account Balance     : " << accountBalance << endl;
    }
};

int main() {
    string name, number;
    float balance;

    cout << "================================" << endl;
    cout << "Welcome to Student Bank of India" << endl;
    cout << "================================" << endl;

    cout << "Enter your account name: ";
    cin >> name;
    cout << "Enter your account number: ";
    cin >> number;
    cout << "Enter initial balance: ";
    cin >> balance;

    BankAccount account(name, number, balance);

    while (true) {
        int choice;
        float amount;
        cout << "\nHow may we help you today?" << endl;
        cout << "(1. Deposit  2. Withdraw  3. Exit)" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter an amount to deposit: ";
            cin >> amount;
            cout << "Deposited Rs. " << amount << " into " << name << "'s account" << endl;
            cout << "Your current balance is Rs. " << account.deposit(amount) << endl;
            account.display();
            break;

        case 2:
            cout << "Enter an amount to withdraw: ";
            cin >> amount;
            cout << "Debited Rs. " << amount << " from " << name << "'s account" << endl;
            cout << "Your current balance is Rs. " << account.withdraw(amount) << endl;
            account.display();
            break;

        case 3:
            cout << "Thank you for using Student Bank of India. Have a good day!" << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
