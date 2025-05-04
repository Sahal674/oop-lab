#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("data_records.txt");
    outFile << "Record 1\n";
    outFile << "Record 2\n";
    outFile << "Record 3\n";
    outFile << "Record 4\n";
    outFile.close();


    ifstream inFile("data_records.txt");
    if (!inFile.is_open()) {
        cout << "Error opening data_records.txt" << endl;
        return 1;
    }


    inFile.seekg(18, ios::beg);

    string record;
    getline(inFile, record);
    cout << "Third record: " << record << endl;

    inFile.close();
    return 0;
}