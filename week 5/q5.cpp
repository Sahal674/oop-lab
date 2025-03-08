// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class doctor{
    private:
        string name;
        string spececialization;
        string exprience;

   public:
    doctor(string name , string spec , string exp): name(name) , spececialization(spec) , exprience(exp){}
    void display(){
        cout<<"name " << name<<endl;
        cout<<"specialization  " << spececialization<<endl;
        cout<<"exprience " << exprience<<endl;
    }    
            
};

class hospital{
    private:
        doctor *doctors[50];
        int num;
    public:
        hospital(){
            num = 0;
        }
        void  adddoctor(doctor *doc){
            if(num < 50){
                doctors[num] = doc;
                num = num + 1;
                cout<<"doctor added"<< endl;
            }
            else{
                cout << "can not add more doctors"<<endl;
            }
        }

};



