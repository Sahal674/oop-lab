#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    double price;

public:
    Car(string model, double price) : model(model), price(price) {}


    
    friend class InventoryManager;

    friend void comparePrice(const Car& car1, const Car& car2);
};

class InventoryManager {
public:
    void updatePrice(Car& car, double newPrice) {
        car.price = newPrice;
    }

    void displayDetails(const Car& car) {
        cout << "Model: " << car.model << ", Price: $" << car.price << endl;
    }
};

void comparePrice(const Car& car1, const Car& car2) {
    if (car1.price > car2.price) {
        cout << car1.model << " is more expensive than " << car2.model << endl;
    } else if (car1.price < car2.price) {
        cout << car2.model << " is more expensive than " << car1.model << endl;
    } else {
        cout << car1.model << " and " << car2.model << " have the same price." << endl;
    }
}

int main() {
    
    Car car1("mazda rx 8", 25000.0);
    Car car2("Honda Accord", 27000.0);

    
    InventoryManager manager;

    cout << "Initial Car Details:" << endl;
    manager.displayDetails(car1);
    manager.displayDetails(car2);

    
    manager.updatePrice(car1, 26000.0);

    
    cout << "\nUpdated Car Details:" << endl;
    manager.displayDetails(car1);
    manager.displayDetails(car2);

    
    cout << "\nComparing Prices:" << endl;
    comparePrice(car1, car2);

    return 0;
}