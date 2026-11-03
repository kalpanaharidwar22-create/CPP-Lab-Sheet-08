#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    double price;

    void input() {
        cout << "Enter car brand: ";
        cin >> brand;
        cout << "Enter car price: ";
        cin >> price;
    }

    void display() {
        cout << "Brand: " << brand << ", Price: " << price << "\n";
    }
};

int main() {
    Car car1, car2;

    cout << "Enter details of first car:\n";
    car1.input();

    cout << "\nEnter details of second car:\n";
    car2.input();

    cout << "\nCar Information:\n";
    car1.display();
    car2.display();

    return 0;
}
