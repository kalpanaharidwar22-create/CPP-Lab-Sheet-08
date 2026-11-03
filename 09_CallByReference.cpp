#include <iostream>
using namespace std;

// Function to swap numbers using call by reference
void swapNumbers(int &first, int &second) {
    int temp = first;
    first = second;
    second = temp;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    swapNumbers(a, b);

    cout << "After swapping: " << a << " " << b;
    return 0;
}
