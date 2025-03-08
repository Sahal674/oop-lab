// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class alarmsystem{
    private:
        string level;
    public:
        alarmsystem(string level ):level(level){}    
    void display(){
        cout << "security level = " << level << endl;
    }    

};

class smarthome{
    private:
        alarmsystem alarm;
    public:
        smarthome(string alarmlevel): alarm(alarmlevel){}
        void dispalydetails(){
            alarm.display();
        }    

};