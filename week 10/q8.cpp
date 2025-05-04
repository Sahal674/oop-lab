#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("config.txt");
    outFile << "AAAAABBBBBCCCCC";
    outFile.close();

    
    fstream configFile("config.txt", ios::in | ios::out);
    if (!configFile.is_open()) {
        cout << "Error opening config.txt" << endl;
        return 1;
    }

    configFile.seekp(5); 
    configFile << "XXXXX";
    configFile.close();

    
    ifstream checkFile("config.txt");
    string content;
    getline(checkFile, content);
    checkFile.close();

    cout << "Updated config.txt content: " << content << endl;
    return 0;
}