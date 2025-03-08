// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class level{
    private:
        string name;
        string difficulty;
    public:
        level(){
            cout<<"con";
        }
        level(string n , string d): name(n) , difficulty(d){}
        void display(){
            cout<<"name"<<name;
            cout << "difficuty" << difficulty;
        }


};

class videogames{
    private:
        string title;
        string genre;
        level levels[50];
        int numlevels;
    public:
        videogames(string t , string g) : title(t) , genre(g){
            numlevels = 0;
        }
        void addlevel(string name , string difficulty){
            if(numlevels < 50){
                level l(name , difficulty);
                levels[numlevels] = l;
                numlevels = numlevels + 1;
            }

        }
        void display(){
            cout<<"title" << title;
            cout<<"genere" << genre;
            cout<<"title" << title;
            for (int i = 0 ; i < 50 ; i++){
                levels[i].display();
            }
            
        }
};