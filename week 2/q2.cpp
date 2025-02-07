// sahal arif
// 24k-0991


#include <iostream>
using namespace std;

void matrixallocate(int**& matrix, int rows, int cols) {
    matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
}

void matrixinput(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void matricesAddition(int** A, int** B, int**& C, int rows, int cols) {
    matrixallocate(C, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void matricesSubtraction(int** A, int** B, int**& C, int rows, int cols) {
    matrixallocate(C, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void matrixdisplay(int** matrix, int rows, int cols) {
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
    int rows, cols;
    cout << "Enter number of rows and columns of your matrix: ";
    cin >> rows >> cols;

    int** A;
    int** B;
    int** result;

    cout << "Enter elements for first matrix:" << endl;
    matrixallocate(A, rows, cols);
    matrixinput(A, rows, cols);

    cout << "Enter elements for second matrix:\n";
    matrixallocate(B, rows, cols);
    matrixinput(B, rows, cols);

    matricesAddition(A, B, result, rows, cols);
    cout << "Matrix Addition Result:\n";
    matrixdisplay(result, rows, cols);
    freeMatrix(result, rows);

    matricesSubtraction(A, B, result, rows, cols);
    cout << "Matrix Subtraction Result:\n";
    matrixdisplay(result, rows, cols);
    freeMatrix(result, rows);

    freeMatrix(A, rows);
    freeMatrix(B, rows);

    return 0;
}