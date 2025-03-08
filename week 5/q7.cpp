// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class product{
    private:
        int id;
        string name;
        int quantity;
    public:
        product(int id , string name , int quantity): id(id) , name(name) , quantity(quantity){}
        void display(){
            cout << "id" << id << endl;
            cout << "name" << name << endl;
            cout << "quantity" << quantity << endl;
            
        }
        int getid(){
            return id;
        }
        string getname(){
            return name;
        }
        int getquantity(){
            return quantity;
        }    
};

class warehouse{
    private:
        product *products[50];
        int numproducts;
    public:
        warehouse(){
            numproducts = 0;
        }    
        void addproduct(product *p){
            products[numproducts] = p;
            numproducts = numproducts + 1;
        }
        void searchproduct(int fid){
            for(int i = 0 ; i < 50 ; i++){
                if(products[i]->getid == fid){
                    products[i]->display;
                }
            }
        }


};