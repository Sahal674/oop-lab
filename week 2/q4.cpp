// sahal arif 
// 24k-0991


#include <iostream>
using namespace std;

void stringsort(string* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    string* strings = new string[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        cin >> strings[i];  
    }

    stringsort(strings, n);

    cout << "Sorted strings:\n";
    for (int i = 0; i < n; i++) {
        cout << strings[i] << endl;
    }

    delete[] strings;
    return 0;
}