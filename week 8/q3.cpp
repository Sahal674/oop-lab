#include <iostream>
using namespace std;

class Vector2D {
private:
    double x;
    double y;

public:
    Vector2D(double x = 0, double y = 0) : x(x), y(y) {}


    Vector2D operator+(const Vector2D& other) const {
        Vector2D temp;
        temp.x =  x + other.x;
        temp.y = y + other.y;
        return temp;
    }

    
    Vector2D operator-(const Vector2D& other) const {
        Vector2D temp;
        temp.x =  x - other.x;
        temp.y = y - other.y;
        return temp;
        
    }

    
    Vector2D operator*(double scalar) const {
        Vector2D temp;
        temp.x =  scalar - x;
        temp.y = scalar - y;
        return temp;

        
    }

    
    friend double dotProduct(const Vector2D& v1, const Vector2D& v2);

    
    friend std::ostream& operator<<(std::ostream& os, const Vector2D& v) {
        os << "(" << v.x << ", " << v.y << ")";
        return os;
    }
};


double dotProduct(const Vector2D& v1, const Vector2D& v2) {
    return v1.x * v2.x + v1.y * v2.y;
}

int main() {
    Vector2D v1(2, 3);
    Vector2D v2(4, 5);

    Vector2D v3 = v1 + v2;
    Vector2D v4 = v1 - v2;
    Vector2D v5 = v1 * 2;
    double dot = dotProduct(v1, v2);

    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v1 + v2: " << v3 << endl;
    cout << "v1 - v2: " << v4 << endl;
    cout << "v1 * 2: " << v5 <<endl;
    cout << "v1 . v2: " << dot << endl;

    return 0;
}