#include <iostream>
using namespace std;
void transposeMatrix(int matrix[][3], int numRows, int numCols) {
    for (int i = 0; i < numRows; i++) {
        for (int j = i + 1; j < numCols; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void printMatrix(int matrix[][3], int numRows, int numCols) {
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int numRows = sizeof(matrix) / sizeof(matrix[0]);
    int numCols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    
    printMatrix(matrix, numRows, numCols);

    transposeMatrix(matrix, numRows, numCols);

    cout << endl;
    printMatrix(matrix, numCols, numRows);

    return 0;
}
