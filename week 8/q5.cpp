#include <iostream>
using namespace std;

class Matrix2x2 {
private:
    int elements[2][2];
public:
    Matrix2x2() { 
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                elements[i][j] = 0;
            }
        }
    }
    Matrix2x2(int a, int b, int c, int d) {
        elements[0][0] = a;
        elements[0][1] = b;
        elements[1][0] = c;
        elements[1][1] = d;
    }

    Matrix2x2 operator+(const Matrix2x2& other) const {
        Matrix2x2 result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.elements[i][j] = elements[i][j] + other.elements[i][j];
            }
        }
        return result;
    }

    Matrix2x2 operator-(const Matrix2x2& other) const {
        Matrix2x2 result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.elements[i][j] = elements[i][j] - other.elements[i][j];
            }
        }
        return result;
    }

   Matrix2x2 operator*(const Matrix2x2& other) const {
        Matrix2x2 result;
        result.elements[0][0] = (elements[0][0]  * other.elements[0][0]) + (elements[0][1] * other.elements[1][0]);
        result.elements[0][1] = (elements[0][0]* other.elements[0][1])+ (elements[0][1]*other.elements[1][1]);
        result.elements[1][0] = (elements[1][0] * other.elements[0][0]) +(elements[1][1] * other.elements[1][0]);
        result.elements[1][1] = (elements[1][0] *other.elements[0][1])  + (elements[1][1] * other.elements[1][1]);
        return result;
    }
  
    friend int determinant(const Matrix2x2& matrix);
    friend class MatrixHelper;
    friend std::ostream& operator<<(std::ostream& os, const Matrix2x2& matrix);
};

int determinant(const Matrix2x2& matrix) {
    int det;
    det =  (matrix.elements[0][0] * matrix.elements[1][1]) - (matrix.elements[0][1] * matrix.elements[1][0]);
    return det;
}

class MatrixHelper {
public:
    void updateElement(Matrix2x2& matrix, int row, int col, int value) {
        matrix.elements[row][col] = value;
    }
};

std::ostream& operator<<(std::ostream& os, const Matrix2x2& matrix) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            os << matrix.elements[i][j] << " ";
        }
        os << std::endl;
    }
    return os;
}

int main() {
    Matrix2x2 matrix1(1, 2, 3, 4);
    Matrix2x2 matrix2(5, 6, 7, 8);

    cout << "Matrix 1:\n" << matrix1;
    cout << "Matrix 2:\n" << matrix2;

    Matrix2x2 sum = matrix1 + matrix2;
    cout << "Sum:\n" << sum;

    Matrix2x2 difference = matrix1 - matrix2;
    cout << "Difference:\n" << difference;
  
    Matrix2x2 product = matrix1 * matrix2;
    cout << "Product:\n" << product;

    cout << "Determinant of Matrix 1: " << determinant(matrix1) << endl;

    MatrixHelper helper;
    helper.updateElement(matrix1, 0, 0, 10);
    cout << "Updated Matrix 1:\n" << matrix1;

    return 0;
}