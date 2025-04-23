#include <iostream>
using namespace std;


class Shipment {
protected:
    string trackingNumber; 

    double weight;
public:
    Shipment(string tn, double w) : trackingNumber(tn), weight(w) {}
    virtual void estimateDeliveryTime() = 0;
    virtual void showDetails() = 0;
    virtual ~Shipment() {}
};


class AirFreight : public Shipment {
public:
    AirFreight(string tn, double w) : Shipment(tn, w) {}

    void estimateDeliveryTime() override {

        cout << "Estimated Delivery Tim (Air): 1-5 days" << endl;
    }

    void showDetails() override {
        cout << "Air Freight Shipment - Tracking #: " << trackingNumber 

             << ", Weight: " << weight << " kg" << endl;
    }
};


class GroundShipment : public Shipment {
public:
    GroundShipment(string tn, double w) : Shipment(tn, w) {}

    void estimateDeliveryTime() override {
        cout << "Estimated Delivery Time (Ground): 7-10 days" << endl;
    }

    void showDetails() override {
        cout << "Ground Shipment - Tracking #: " << trackingNumber 
             << ", Weight: " << weight << " kg" << endl;
    }
};


int main() {
    Shipment* s1 = new AirFreight("AIR123", 10.5);
    Shipment* s2 = new GroundShipment("GRD456", 25.0);

    s1->showDetails();

    s1->estimateDeliveryTime();

    cout << endl;

    s2->showDetails();
    s2->estimateDeliveryTime();

    delete s1;
    delete s2;

    return 0;
}