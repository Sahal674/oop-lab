#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("vehicles.txt");

    if (!file.is_open()) {
        cout << "Error: Could not open vehicles.txt" << endl;
        return 1;
    }

    string line;

    while (getline(file, line)) {
        if (line.empty() || line[0] == '/' || line[0] == '#')
            continue;

        istringstream iss(line);
        string type, id, name, yearStr, extraData, cert;

        getline(iss, type, ',');
        getline(iss, id, ',');
        getline(iss, name, ',');
        getline(iss, yearStr, ',');
        getline(iss, extraData, ',');
        getline(iss, cert);

    
        auto trim = [](string& str) {
            size_t start = str.find_first_not_of(" ");
            if (start != string::npos)
                str = str.substr(start);
        };
        trim(type); trim(extraData);

        
        size_t pos = extraData.find(':');
        if (pos != string::npos) {
            string valueStr = extraData.substr(pos + 1);
            trim(valueStr);

            if (type == "AutonomousCar") {
                float softwareVersion = stof(valueStr);
                cout << "\nAutonomousCar - ID: " << id
                     << "\nSoftware Version: " << softwareVersion << endl;
            }
            else if (type == "ElectricVehicle") {
                int batteryCapacity = stoi(valueStr);
                cout << "\nElectricVehicle - ID: " << id
                     << "\nBattery Capacity: " << batteryCapacity << " kWh" << endl;
            }
            else {
                cout << "\nOther Vehicle Type - ID: " << id << " (No parsing done)" << endl;
            }
        } else {
            cout << "\nInvalid ExtraData format for ID: " << id << endl;
        }
    }

    file.close();
    return 0;
}