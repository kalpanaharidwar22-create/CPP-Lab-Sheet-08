#include <iostream>
using namespace std;

// Function to add two matrices
void addMatrices(int first[10][10], int second[10][10],
                 int result[10][10], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
}

int main() {
    int first[10][10], second[10][10], result[10][10];
    int rows, columns;

    cout << "Enter rows and columns (maximum 10): ";
    cin >> rows >> columns;

    if (rows < 1 || rows > 10 || columns < 1 || columns > 10) {
        cout << "Invalid matrix size.";
        return 0;
    }

    cout << "Enter first matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++) cin >> first[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++) cin >> second[i][j];

    addMatrices(first, second, result, rows, columns);

    cout << "Sum of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) cout << result[i][j] << " ";
        cout << "\n";
    }

    return 0;
}
