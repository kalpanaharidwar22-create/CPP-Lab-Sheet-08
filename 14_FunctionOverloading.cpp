#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int first, int second) {
        return first + second;
    }

    double add(double first, double second) {
        return first + second;
    }
};

int main() {
    Calculator calculator;

    cout << "Addition of integers: " << calculator.add(10, 20) << "\n";
    cout << "Addition of decimal numbers: " << calculator.add(2.5, 3.5) << "\n";

    return 0;
}
