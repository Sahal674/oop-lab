// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class apartment{
    private:
        int id;
        string address;
        char *name;
    public:
        apartment(int id , string address ,char * ownername ):id(id) , address(address){
            name = new char[strlen(ownername)];
            strcmp(name , ownername);
        }
        apartment(apartment &obj){
            id = obj.id;
            address = obj.address;
            name = obj.name;
        }    
        void display(){
            cout<<"id" << id<<endl;
            cout<<"address" << address<<endl;
            cout<<"name" << name<<endl;

        }

};