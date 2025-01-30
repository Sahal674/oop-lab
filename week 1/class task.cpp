//sahal arif 
//24k-0991

#include <iostream>
#include <string>
using namespace std;


// task 2:
void check(string arr1[5] , string arr2[5]){
    cout <<"pls enetr an name to be found " << endl;
    string namee;
    cin >> namee;
    bool flag = false;
    for(int i = 0 ; i < 5 ; i++){
        if(arr1[i] == namee){
            flag = true;
            cout << "memeber registered at event 1 undex : " << i << endl; 
        }
        if (arr2[i] == namee ){
            flag = true;
            cout << "memeber registered at event 2 undex : " << i << endl; 
        }    
    }
    if (flag == false)
    {
       cout << "member not registed" << endl; 
    }
    

}

// task 3:
void donation( string arr1[5] , string arr2[5]){
    int total;
    total = 0;
    for(int i = 0 ; i < 5 ; i++){
        if(arr1[i] != ""){
            total = total + 10;
        }
    }
    for(int j = 0 ; j < 5 ; j++){
        if(arr2[j] != ""){
            total = total + 10;
        }
    }
    cout << "total donation collected from the event is : " << total << endl;   
}



// task 4 :
void display(string arr[5]){
    for(int i = 4 ; i <=0 ; i--){
        cout << arr[i] << endl;
    }

}





// task 1:
int main(){
    string event1[5] = {"","","","",""};
    string event2[5] = {"","","","",""};
    int index1 = 0;
    int index2 = 0;
    int a = 1;
    int b = 1; 
    string name;
    while( a != 0 && index1 < 5){
        cout << "event 1" << endl;
        cout << "enetr 0 to stop" << endl;
        cin >> a;
        cout << "pls enter name for event 1 index : " << index1 << endl;
        cin >> name;
        event1[index1] = name;
        index1 = index1 + 1;
    } 

    while( b != 0 && index2 < 5){
        cout << "event 2" << endl;
        cout << "enetr 0 to stop" << endl;
        cin >> b;
        cout << "pls enter name for event 2 index : " << index1 << endl;
        cin >> name;
        event2[index2] = name;
        index2 = index2 + 1;

    }
    check(event1 , event2);
    donation(event1 , event2);
    display(event1);
    display(event2); 



    return 0;

}