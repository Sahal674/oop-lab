// sahal arif 
// 24k - 0991

#include <iostream>
#include <string>
using namespace std;

// task 2:
void check(int arr[4][7]){
    int row , col;
    for(row = 0 ; row < 4 ; row++){
        for(col = 0 ; col < 7 ; col++){
            if(arr[row][col] > 150){
                cout << "day : " << (col + 1) << "of city : " << (row + 1) << " has critical pollution" << endl;
            }
        }
    }
}
 


// task 3: 
void visualizeAQI(int aqi[4][7]) {
    for (int i = 0; i < 4; ++i) {
        cout << "AQI visualization for City " << i + 1 << endl;
        for (int j = 0; j < 7; ++j) {
            std::cout << "Day " << j + 1 << ": ";
            for (int k = 0; k < aqi[i][j]; k += 50) {
                cout << "*";
            }
            cout << " (AQI: " << aqi[i][j] << ")" << endl;
        }
    }
}










int main(){
 //task 1:
   int aqi[4][7] = {{120 , 250 , 78 , 43 , 156 , 89 , 179},
                    {56 , 45 , 89 , 90 , 157 , 182 , 143},
                    {72 , 38 , 69 , 94 , 102 , 183 , 192 },
                    {35 , 87 , 120 , 137 , 153 , 110 , 142}};
    int avg1 , avg2 , avg3 , avg4 , t1 = 0 , t2 = 0 , t3 = 0 , t4 = 0;
    for(int i = 0 ; i < 7 ; i++){
        t1 = t1 + aqi[0][i];
    }
    avg1 = (t1/7);
    cout << "city 1 :" << avg1 << endl;

    for(int j = 0 ; j < 7 ; j++){
        t2 = t2 + aqi[1][j];
    }
    avg2 = (t2/7);
    cout << "city 2 :" << avg2 << endl;

    for(int k = 0 ; k < 7 ; k++){
        t3 = t3 + aqi[2][k];
    }
    avg3 = (t3/7);
    cout << "city 3 :" << avg3 << endl;

    for(int l = 0 ; l < 7 ; l++){
        t4 = t4 + aqi[3][l];
    }
    avg4 = (t4/7);
    cout << "city 4 :" << avg4 << endl;

    if(avg1 > avg2 && avg1 > avg3 && avg1 > avg4){
        cout << "city 1 has the worst air quality " << endl;
    }
    if(avg2 > avg1 && avg2 > avg3 && avg2 > avg4){
        cout << "city 2 has the worst air quality " << endl;
    }  
    if(avg3 > avg2 && avg3 > avg1 && avg3 > avg4){
        cout << "city 3 has the worst air quality " << endl;
    }   
    if(avg4 > avg2 && avg4 > avg3 && avg4 > avg1){
        cout << "city 4 has the worst air quality " << endl;
    }   

// task 4
    int newaqi[4][28];
    int row , col;
    for(row = 0 ; row < 4 ; row++){
        for(col = 0 ; col < 7 ; col++){
            newaqi[row][col] = aqi[row][col]; 
        }
    }
    int r , c , a;
     for(r = 0 ; r < 4 ; r++){
        for(c = 0 ; c < 21 ; c++){
            cout << "pls eneter day : " << (c + 8) << "of city "  << r << endl;
            cin >> a;
            newaqi[r][c + 7] = a; 
        }
    }

    int mavg1 , mavg2 , mavg3 , mavg4 , mt1 = 0 , mt2 = 0 , mt3 = 0 , mt4 = 0;
    for(int x = 0 ; x < 28 ; x++){
        mt1 = mt1 + newaqi[0][x];
    }
    mavg1 = (mt1/28);
    cout << "montly avg of  city 1 :" << mavg1 << endl;

    for(int y = 0 ; y < 28 ; y++){
        mt2 = mt2 + newaqi[1][y];
    }
    avg2 = (mt2/28);
    cout << "montly avg of  city 2 :" << mavg2 << endl;

    for(int z = 0 ; z < 28 ; z++){
        mt3 = mt3 + newaqi[2][z];
    }
    mavg3 = (mt3/28);
    cout << "montly avg city 3 :" << mavg3 << endl;

    for(int s = 0 ; s < 28 ; s++){
        mt4 = mt4 + newaqi[3][s];
    }
    mavg4 = (mt4/28);
    cout << "montly avg city 4 :" << mavg4 << endl;

    int dif1 = avg1 - mavg1;
    int dif2 = avg2 - mavg2;
    int dif3 = avg3 - mavg3;
    int dif4 = avg4 - mavg4;
    if(dif1 < 0){
        dif1 = 0;
    }
    if(dif2 < 0){
        dif2 = 0;
    }    
    if(dif3 < 0){
        dif3 = 0;
    }
    if(dif4 < 0){
        dif4 = 0;
    }

    if(dif1 > dif2 && dif1 > dif3 && dif1 > dif4){
        cout << "city 1 has the most improvment in air quality " << endl;
    }
    if(dif2 > dif1 && dif2 > dif3 && dif2 > dif4){
        cout << "city 2 has the most improvement in air quality " << endl;
    }  
    if(dif3 > dif2 && dif3 > dif1 && dif3 > dif4){
        cout << "city 3 has the moast improment in air quality " << endl;
    }   
    if(dif4 > dif2 && dif4 > dif3 && dif4 > dif1){
        cout << "city 4 has the most improvment in air quality " << endl;
    } 








}