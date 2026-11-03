#include <iostream>
using namespace std;

// Function to find the sum of main diagonal elements
int diagonalSum(int matrix[10][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += matrix[i][i];
    return sum;
}

int main() {
    int matrix[10][10], size;
    cout << "Enter order of square matrix (maximum 10): ";
    cin >> size;

    if (size < 1 || size > 10) {
        cout << "Invalid size.";
        return 0;
    }

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++) cin >> matrix[i][j];

    cout << "Sum of main diagonal elements: " << diagonalSum(matrix, size);
    return 0;
}
