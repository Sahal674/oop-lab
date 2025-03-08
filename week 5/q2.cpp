// sahal arif
// 24k-0991

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class university{
    private:
        int id;
        string name;
        int *examScores;
        int num;

    public:
        university(int id ,string name , int *scores , int num ):id(id) , name(name), num(num){
            examScores = new int[num];
            for(int i = 0 ; i < num ; i++){
                examScores[i] = scores[i];
            }
        }   
        university( university& obj){
            id = obj.id;
            name = obj.name;
            num = obj.num;
            examScores = new int[num];
            for(int i = 0 ; i < num ; i++){
                examScores[i] = obj.examScores[i];
            }
        }
        void display(){
            cout<<"id" <<id<< endl;
            cout<<"nmae" <<name<< endl;
            cout<<"scores";
            for (int i = 0; i < num; i++)
            {
                cout<< *(examScores + i)<<endl;
            }
            
        } 
};