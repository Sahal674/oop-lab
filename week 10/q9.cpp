#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream outFile("large_log.txt");
    outFile << "Line1: Sensor data...\n";
    outFile << "Line2: More sensor data...\n";
    outFile << "Line3: Final sensor data.\n";
    outFile.close();


    ifstream inFile("large_log.txt");
    if (!inFile.is_open()) {
        cout << "Error opening large_log.txt" << endl;
        return 1;
    }

    char buffer[11]; 
    inFile.read(buffer, 10);
    buffer[10] = '\0';
    cout << "First 10 characters: " << buffer << endl;
    cout << "Position after first read: " << inFile.tellg() << endl;

    inFile.read(buffer, 10);
    buffer[10] = '\0';
    cout << "Next 10 characters: " << buffer << endl;
    cout << "Position after second read: " << inFile.tellg() << endl;

    inFile.close();
    return 0;
}