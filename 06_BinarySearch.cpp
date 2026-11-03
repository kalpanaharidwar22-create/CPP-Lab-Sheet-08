#include <iostream>
using namespace std;

// Function to search in a sorted array
int binarySearch(int array[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == key) return mid;
        if (array[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int array[100], size, key;
    cout << "Enter array size: ";
    cin >> size;

    if (size < 1 || size > 100) {
        cout << "Invalid size.";
        return 0;
    }

    cout << "Enter " << size << " elements in ascending order: ";
    for (int i = 0; i < size; i++) cin >> array[i];

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(array, size, key);

    if (result == -1)
        cout << "Element not found.";
    else
        cout << "Element found at position " << result + 1 << ".";

    return 0;
}
