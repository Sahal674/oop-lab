#include <iostream>
using namespace std;


class WeatherSensor {
public:
    virtual void readData() = 0;
    virtual void displayReport() = 0;
    virtual ~WeatherSensor() {}
};
class Thermometer : public WeatherSensor {
private:
    float temp = 25.0;
public:
    void readData() {
        cout << "Reading temperature data" << endl;
    }

    void displayReport()  {
        cout << "Temperature: " << temp << " C" << endl;
    }
};


class Barometer : public WeatherSensor {
private:
    float pressure = 1012.5;
public:
    void readData()  {
        cout << "Reading pressure data" << endl;
    }

    void displayReport()  {
        cout << "Pressure: " << pressure << " hPa" << endl;
    }
};


int main() {
    WeatherSensor* sensor1 = new Thermometer();
    WeatherSensor* sensor2 = new Barometer();

    sensor1->readData();
    sensor1->displayReport();

    sensor2->readData();
    sensor2->displayReport();

    delete sensor1;
    delete sensor2;

    return 0;
}