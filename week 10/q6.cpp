#include <iostream>
#include <fstream>
using namespace std;

struct InventoryItem {
    int itemID;
    char itemName[20];
};

int main() {
    InventoryItem itemOut = {101, "Laptop"};
    ofstream outFile("inventory.dat", ios::binary);
    outFile.write(reinterpret_cast<char*>(&itemOut), sizeof(itemOut));
    outFile.close();

    InventoryItem itemIn;
    ifstream inFile("inventory.dat", ios::binary);
    inFile.read(reinterpret_cast<char*>(&itemIn), sizeof(itemIn));
    inFile.close();

    cout << "Loaded Item ID: " << itemIn.itemID << endl;
    cout << "Loaded Item Name: " << itemIn.itemName << endl;

    return 0;
}