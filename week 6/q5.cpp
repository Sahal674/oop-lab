// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class device {
    protected:
        int deviceID;
        bool status;
    public:
        device(int d , bool s): deviceID(d) , status(s){}
        
        void display(){
            cout << "device id " << deviceID << "status " << status;
        }
};

class smartphone :virtual public device{
    protected:
        float screenSIze;
    public:
        smartphone(int d , bool s , float ss) : device(d , s ) , screenSIze(ss){}

        void display(){
            cout << "device id " << deviceID << "status " << status << "screen size :" << screenSIze;      }

};


class smartwatch :virtual public device{
    protected:
        bool heartRateMointer;
    public:
        smartwatch(int d , bool s , bool hrm) : device(d , s ) , heartRateMointer(hrm){}

        void display(){
            cout << "device id " << deviceID << "status " << status << "heart rate mointer  :" << heartRateMointer;      }

};

class smartWearable : public smartphone , public smartwatch{
    protected:
        int stepCounter;
    
    public:
        smartWearable(int d , bool s , float ss , bool hrm , int sc): device(d , s) , smartphone(d , s , ss) , smartwatch(d ,s , hrm ) , stepCounter(sc){}
        
        void display(){
            cout << "device id " << deviceID << "status " << status << "heart rate mointer  :" << heartRateMointer << "screen size :" << screenSIze << "step counte " << stepCounter ;}

};


int main(){
    smartWearable sm1(123 , true , 6.5 , true , 30000);
    sm1.display();

    return 0;
}