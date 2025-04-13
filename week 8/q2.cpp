#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string accountNumber;
    double balance;
    friend class Manager;
    friend void transferFunds(Account& fromAccount, Account& toAccount, double amount);
public:
    Account(string number, double bal) : accountNumber(number), balance(bal) {}
};

class Manager {
public:
    void displayAccountDetails(Account& account) {
        cout << "Account Number: " << account.accountNumber << endl;
        cout << "Balance: $" << account.balance << endl;
    }
    void updateBalance(Account& account, double amount, bool deposit) {
        if (deposit == true) {
            account.balance = account.balance + amount;
            cout << "Deposited $" << amount << " into account " << account.accountNumber << endl;
        } else {
            if (account.balance >= amount) {
                account.balance -= amount;
                cout << "Withdrawn $" << amount << " from account " << account.accountNumber << endl;
            } else {
                cout << "Insufficient balance in account " << account.accountNumber << endl;
            }
        }
    }
};

void transferFunds(Account& accountFROM, Account& Accountto, double amount) {
    if (accountFROM.balance >= amount) {
        accountFROM.balance -= amount;
        Accountto.balance += amount;
        cout << "Transferred $" << amount << " from account " << accountFROM.accountNumber << " to account " << Accountto.accountNumber << endl;
    } else {
        cout << "Transfer failed: Insfficint balance in account " << accountFROM.accountNumber << endl;
    }
}

int main() {
    Account account1("123456", 100000);
    Account account2("789012", 5000);
    Manager manager;

    cout << "Initial Account Details:" << endl;
    manager.displayAccountDetails(account1);
    manager.displayAccountDetails(account2);

    manager.updateBalance(account1, 2030, true);
    manager.updateBalance(account2, 1040, false);

    cout << "\nAccount Details After Update:" << endl;
    manager.displayAccountDetails(account1);
    manager.displayAccountDetails(account2);

    transferFunds(account1, account2, 300);

    cout << "\nAccount Details After Transfer:" << endl;
    manager.displayAccountDetails(account1);
    manager.displayAccountDetails(account2);

    return 0;
}