#include <iostream>
#include <string>
using namespace std;


class menuitem{
    protected:
        string dishname;
        double price;
    
    public:
        menuitem(string d = "", double p = 0.0)  : dishname(d) , price(p){}

        virtual void showdetails() = 0;
        virtual void prepare() = 0;



};

class appetizer : public menuitem {
    public:
        appetizer(string d , double p) : menuitem(d,p){}

        void showdetails(){
            cout << dishname << price;
        }

        void prepare(){
            cout << "prreparing apitizer ";
        }
};


class maincourse : public menuitem {
    public:
        maincourse(string d , double p) : menuitem(d,p){}

        void showdetails(){
            cout << dishname << price;
        }

        void prepare(){
            cout << "prreparing main cousrse ";
        }
};

int main(){
    appetizer a("bread" , 4.2 );
    maincourse m("pasta" , 50.5);
    a.prepare();
    a.showdetails();
    m.prepare();
    m.showdetails();


    return 0;
} 