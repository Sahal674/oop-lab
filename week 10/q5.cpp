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
        if (line.empty() || line[0] == '#' || line[0] == '/')
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

        if (type == "Hybrid Truck") {
            size_t cargoPos = extraData.find("Cargo:");
            size_t batteryPos = extraData.find("Battery:");

            if (cargoPos != string::npos && batteryPos != string::npos) {
                string cargoStr = extraData.substr(cargoPos + 6, batteryPos - (cargoPos + 6));
                string batteryStr = extraData.substr(batteryPos + 8);

                int cargo = stoi(cargoStr);
                int battery = stoi(batteryStr);

                cout << "\nHybrid Truck - ID: " << id
                     << "\nCargo Capacity: " << cargo
                     << "\nBattery Capacity: " << battery << endl;
            } else {
                cout << "\nInvalid ExtraData format for Hybrid Truck ID: " << id << endl;
            }
        } else {
            cout << "\nOther Vehicle Type - ID: " << id << endl;
        }
    }

    file.close();
    return 0;
}