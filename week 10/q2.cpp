#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("vehicles.txt");

    if (!file.is_open()) {
        cout << "Error: Could note  open vehicles.txt" << endl;
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

        cout << "\nType: " << type
             << "\nID: " << id
             << "\nName: " << name
             << "\nYear (as string): " << yearStr
             << "\nExtraData: " << extraData
             << "\nCertification: " << cert << endl;
    }

    file.close();
    return 0;
}