#include <iostream>
using namespace std;

// Function to print Fibonacci series
void printFibonacci(int terms) {
    int first = 0, second = 1;

    for (int i = 1; i <= terms; i++) {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;

    printFibonacci(terms);
    return 0;
}
