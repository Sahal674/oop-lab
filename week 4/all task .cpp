// sahal arif 
// 24k-0991

#include <iostream>
#include <string>
using namespace std;

class car{
    private:
        string model;
        string brand;
        float rentealPrice;
        bool isAvailable;
        int carid;
        float totalRevenue; 

    
    public:
        car(){
            brand = "unkown";
            model = "generic";
            rentealPrice = 0.0;
            isAvailable = true;

        }

        car(int id) : carid(id), brand("Unknown"), model("Generic"), rentealPrice(0.0), isAvailable(true), totalRevenue(0.0) {}


       car( string b, string m, float price, bool available = true , int id) : brand(b), model(m), rentealPrice(price), isAvailable(available), totalRevenue(0.0) , carid(id) {}
        
       car (car& other) 
       : brand(other.brand), model(other.model), rentealPrice(other.rentealPrice),
         isAvailable(other.isAvailable), totalRevenue(other.totalRevenue) {
       cout << "Car copied successfully.\n";
   }

   ~car(){

       cout <<" car is being removed from memory.\n"
   }


        void updatedetails(string b , string m , float rp , bool a , int id){
            brand = b;
            model = m;
            rentealPrice = rp;
            isAvailable = a;
            carid = id;

        }
        bool checkAvaillablity(){
            return isAvailable;
        }
        float rentCar(int days){
            float finalprice;
            if(isAvailable == false){
                cout << "car not available"<<endl;  
            }
            else{
                finalprice = applydiscount(days);
                cout<<"car booked" << endl;
                isAvailable = false;
                totalRevenue = totalRevenue + finalprice;
                return finalprice;
            }
        }
        float applydiscount(int days){
            int fprice;
            fprice = rentealPrice * days;
            if (days > 10) {
                fprice = fprice*0.9; 
            } else if (days > 5) {
                fprice = fprice*0.95; 
            }
            return fprice;
        }
        void displayrevenue(){
            cout << "Total Revenue for Car ID " << carid << ": $" << totalRevenue << endl;
        }
    
        void displayCarDetails() const {
            cout << "\nCar ID: " << carid 
                 << "\nBrand: " << brand 
                 << "\nModel: " << model 
                 << "\nRental Price: $" << rentealPrice
                 << "\nAvailability: " << (isAvailable ? "Available" : "Rented") 
                 << "\nTotal Revenue: $" << totalRevenue << endl;
        }
    


};
