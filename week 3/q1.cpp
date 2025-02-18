#include <iostream>
#include <list>
#include <string>

using namespace std;

class Wallet {
private:
    string ownerName;
    double totalBalance;
    list<string> transactionHistory;

public:
    Wallet(string name, double balance) {
        ownerName = name;
        totalBalance = balance;
    }

    void moneyadd(double amount) {
        totalBalance += amount;
        transactionHistory.push_back("Added: " + to_string(amount));
        cout << "Rs." << amount << " added to wallet. New balance: Rs." << totalBalance << endl;
    }

    void spendMoney(double amount) {
        if (amount > totalBalance) {
            cout << "Insufficient balance!" << endl;
        } else {
            totalBalance -= amount;
            transactionHistory.push_back("Spent: " + to_string(amount));
            cout << "Rs." << amount << " spent. Remaining balance: Rs." << totalBalance << endl;
        }
    }

    void displayTransactions() {
        cout << "Transaction History for " << ownerName << ":" << endl;
        for (string &transaction : transactionHistory) {
            cout << transaction << endl;
        }
    }
};

