#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual double area() = 0; // Pure virtual function
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);

    cout << "Area of circle: " << circle.area() << "\n";
    cout << "Area of rectangle: " << rectangle.area() << "\n";

    return 0;
}
