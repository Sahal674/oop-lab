#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("sensor_log.txt");
    if (!file.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    file << "Temperature: 25C\n";
    cout << "Write position after 1st line: " << file.tellp() << endl;

    file << "Humidity: 60%\n";
    cout << "Write position after 2nd line: " << file.tellp() << endl;

    file.close();
    return 0;
}