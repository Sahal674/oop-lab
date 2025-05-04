#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;


struct Vehicle {
    string type;
    string model;
    string name;
    int year;
    string specialInfo;
    string certificate;
};

int main() {
    ifstream file("vehicles.txt");

    if (!file.is_open()) {
        cout << "Error: Could not open vehicles.txt" << endl;
        return 1;
    }

    string line;
    Vehicle vehicles[100]; 
    int count = 0;

    while (getline(file, line)) {
        
        if (line.empty()) continue;
        if (line.find("//") == 0 || line.find("#") == 0) continue;

        istringstream iss(line);
        string part;
        Vehicle v;

        
        getline(iss, v.type, ',');
        getline(iss, v.model, ',');
        getline(iss, v.name, ',');
        getline(iss, part, ',');
        v.year = stoi(part); 

        getline(iss, v.specialInfo, ',');
        getline(iss, v.certificate); 

        
        v.type = v.type.substr(v.type.find_first_not_of(" "));
        v.model = v.model.substr(v.model.find_first_not_of(" "));
        v.name = v.name.substr(v.name.find_first_not_of(" "));
        v.specialInfo = v.specialInfo.substr(v.specialInfo.find_first_not_of(" "));
        v.certificate = v.certificate.substr(v.certificate.find_first_not_of(" "));

        
        vehicles[count++] = v;
    }

    file.close();

    
    cout << "\n--- Vehicle Data Loaded ---\n";
    for (int i = 0; i < count; i++) {
        cout << "\nVehicle " << i + 1 << ":\n";
        cout << "Type: " << vehicles[i].type << endl;
        cout << "Model: " << vehicles[i].model << endl;
        cout << "Name: " << vehicles[i].name << endl;
        cout << "Year: " << vehicles[i].year << endl;
        cout << "Special Info: " << vehicles[i].specialInfo << endl;
        cout << "Certificate: " << vehicles[i].certificate << endl;
    }

    return 0;
}