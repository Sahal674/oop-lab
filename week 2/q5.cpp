// sahal arif 
// 24k-0991


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* intarray = new int[n];

    cout << "Enter " << n << " number of  integers: ";
    for (int i = 0; i < n; i++) {
        cin >> *(intarray + i); 
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << *(intarray + i) << " ";
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(intarray + i);
    }

    cout << "Sum of elements: " << sum << endl;

    delete[] intarray;
    return 0;
}