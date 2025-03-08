// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class employee{
    private:
        string name;
        string designation;
    public:
        employee(string name , string designation): name(name) , designation(designation){}
        void display(){
            cout<< name;
            cout << designation;
        }


};

class projects{
    private:
        string title;
        int deadline;
        int empnum;
        employee *emps[20];

    public:
        projects(string title , int deadline , int empnum = 0 ) : title(title) , deadline(deadline) {}
        
        void addemployees(employee *emp){
            if (empnum < 20){
                emps[empnum] = emp;
                empnum = empnum + 1;

            }
            else{cout<<"can not add emp";}
            
        }
        void dispaly(){
            cout << title<<endl;
            cout << deadline<<endl;
            for(int i = 0 ; i < empnum ; i ++){
                 emps[i]->display();
            }
            


        }

};
