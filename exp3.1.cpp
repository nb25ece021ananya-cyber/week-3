#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    double balance;

public:
    void openAccount(string name, double initialBalance)
    {
        accountHolderName = name;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    double getbalance()
    {
        return balance;
    }
};

int main()
{
    cout << "Enter account holder name: ";
    string name;
    getline(cin, name);

    cout << "Enter initial balance: ";
    double initialBalance;
    cin >> initialBalance;

    BankAccount account;
    account.openAccount(name, initialBalance);

    cout << "Enter amount to deposit: ";
    double depositAmount;
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << "Enter amount to withdraw: ";
    double withdrawAmount;
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    cout << "Account holder: " << name << endl;
    cout << "Current balance: " << account.getbalance() << endl;

    return 0;
}
