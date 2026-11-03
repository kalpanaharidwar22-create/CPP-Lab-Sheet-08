#include <iostream>
using namespace std;

// Function to sort array using bubble sort
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int array[100];
    if (size < 1 || size > 100) {
        cout << "Please enter a size between 1 and 100.";
        return 0;
    }

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) cin >> array[i];

    bubbleSort(array, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) cout << array[i] << " ";

    return 0;
}
