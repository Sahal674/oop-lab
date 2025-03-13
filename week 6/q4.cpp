// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class account {
    protected:
        int accountNumber;
        float balance;

    public:
        account( int accnum , float bal): accountNumber(accnum) , balance(bal){}
        
        void displayDetails(){
            cout << " acount number :" << accountNumber << " :  balance :" << balance;
        }
        
};

class savingAccount: public account{
    protected:
        float interestRate;
    
    public:
        savingAccount(int accnum , float bal , float ir): account(accnum , bal) , interestRate(ir){}

        void displayDetails(){
            cout << " acount number :" << accountNumber << " :  balance :" << balance << " interest rate  :" << interestRate << endl;

        }


};

class checkingAccount: public account{
    protected:
        float overDraftLimit;
    
    public:
        checkingAccount(int accnum , float bal , float odl): account(accnum , bal) , overDraftLimit(odl){}

        void displayDetails(){
            cout << " acount number :" << accountNumber << " :  balance :" << balance << " overdraft limit   :" << overDraftLimit <<endl;

        }
};

int main(){
    savingAccount s1(1234 , 1000.2 , 20.5);
    checkingAccount c1(5678 , 300.92 , 40.9);

    s1.displayDetails();
    c1.displayDetails();
    return 0;
    
}