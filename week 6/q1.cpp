// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class employee{
    public:
        string name ;
        float salary;

    employee(string name , float salary){
        this ->name = name;
        this ->salary = salary;

    }
    
    void displayDetails(){
        cout << " emplayee name : "<< name << " empalye salaary :" << salary<<endl;
    }
};

class manager : public employee{
    public:
        float bonus;

        manager(string name , float salary , float bonus): employee(name , salary){
            this->bonus = bonus;
        }

        void displayDetails(){
            cout << " emplayee name : "<< name << "   empalye salaary :" << salary<< "   manaeger bonus :"<<bonus<<endl;

        }


};

int main(){
    manager m1("sahal" , 200000.232 , 50000);
    m1.displayDetails();
    return 0;
}


