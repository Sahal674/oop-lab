#include <iostream>
#include <cmath>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}


    Complex operator+(const Complex& obj) const {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    Complex operator-(const Complex& obj) const {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
        
    }

    Complex operator*(const Complex& obj) const {
        Complex temp;
        temp =  real * obj.real - imag * obj.imag, real * obj.imag + imag * obj.real;
        return temp;
    }

    Complex operator/(const Complex& obj) const {
        double denominator = obj.real * obj.real + obj.imag * obj.imag;
        return Complex((real * obj.real + imag * obj.imag) / denominator, (imag * obj.real - real * obj.imag) / denominator);
    }

    
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << "(" << c.real << " + " << c.imag << "i)";
        return os;
    }

    
    friend double magnitude(const Complex& c) {
        return sqrt(c.real * c.real + c.imag * c.imag);
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    cout << "c1 + c2 = " << c1 + c2 << endl;
    cout << "c1 - c2 = " << c1 - c2 << endl;
    cout << "c1 * c2 = " << c1 * c2 << endl;
    cout << "c1 / c2 = " << c1 / c2 << endl;

    cout << "|c1| = " << magnitude(c1) << endl;
    cout << "|c2| = " << magnitude(c2) << endl;

    return 0;
}