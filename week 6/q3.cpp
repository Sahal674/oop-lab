// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;


class person{
    protected:
        string name ;
        int age;
    public:
        person(string name , int age): name(name) , age(age){}
        
        void displayDetails(){
            cout << " name :"<< name << " :  age :" << age << ":" << endl;
        }
};

class teacher : virtual public person{
    protected:
        string subject;
    public:
        teacher(string name , int age , string subject): person(name , age ) , subject(subject){}
        
        void displayDetails(){
            cout << " name :"<< name << " :  age :" << age << ":" <<" subject :"<< subject<<endl;
        }
};


class researcher : virtual public person{
    protected:
        string researchArea;
    public:
        researcher(string name , int age , string researchArea): person(name , age ) , researchArea(researchArea){}
        
        void displayDetails(){
            cout << " name :"<< name << " :  age :" << age << ":" <<" reseachrsharea :"<< researchArea<<endl;
        }
};

class professor : public teacher , public researcher{
    protected:
        int publications;
    public:
        professor(string name , int age , string subject , string researchArea , int publications): teacher(name , age , subject) , researcher(name , age , researchArea) , person(name , age ) , publications(publications){}

        void displayDetails(){
            cout << " name :"<< name << " :  age :" << age << ":" <<" reseachrsharea :"<< researchArea<<" subject :"<< subject<<endl;
        } 


};

int main(){
    professor p1("sahal" , 20 , "maths" , "integrals " , 5);
    p1.displayDetails();

    return 0;
}