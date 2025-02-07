// sahal arif 
// 24k-0991


#include <iostream>
using namespace std;

void matrixAllocate(int**& matrix, int rows, int cols) {
    matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
}

void matrixInput(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void matricesMultiplication(int** A, int** B, int**& C, int r1, int c1, int c2) {
    matrixAllocate(C, r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void matrixDisplay(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int row1, col1, row2, col2;
    cout << "Enter rows and columns of first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> row2 >> col2;

    if (col1 != row2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 1;
    }

    int** A;
    int** B;
    int** C;

    cout << "Enter elements of first matrix:\n";
    matrixAllocate(A, row1, col1);
    matrixInput(A, row1, col1);

    cout << "Enter elements of second matrix:\n";
    matrixAllocate(B, row2, col2);
    matrixInput(B, row2, col2);

    matricesMultiplication(A, B, C, row1, col1, col2);

    cout << "Resultant Matrix:\n";
    matrixDisplay(C, row1, col2);

    freeMatrix(A, row1);
    freeMatrix(B, row2);
    freeMatrix(C, row1);

    return 0;
}