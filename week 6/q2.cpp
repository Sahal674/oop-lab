// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class vehicle{
    public:
        string brand ;
        int speed;
    
        vehicle(string brand , int speed ){
            this->brand = brand;
            this ->speed = speed;
        }
        void displayDetails(){
            cout << "brand :" << brand << "  top speed :" << speed << endl;
        }
};

class car : public vehicle{
    public:
        int seats;

        car(string brand , int speed , int seats): vehicle(brand , speed){
            this ->seats =  seats;
        }

        void displayDetails(){
            cout << "brand :" << brand << "  top speed :" << speed <<"  seats :  "<<seats<<endl;
        }


};

class electricCar : public car{
    public:
        int batteryLife;

        electricCar(string brand , int speed , int seats , int batteryLife): car(brand , speed , seats){
            this ->batteryLife = batteryLife;
        }

        void displayDetails(){
            cout << "brand :" << brand << "  top speed :" << speed <<"  seats :  "<<seats<<" battery life :"<<batteryLife<<endl;
        }

};

int main(){
    electricCar E1("tesla" , 300 , 4 , 1000000);
    E1.displayDetails();
    


    return 0;
}

