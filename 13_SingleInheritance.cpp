#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Student : public Person {
private:
    float marks;

public:
    void inputStudent() {
        inputPerson();
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudent() {
        displayPerson();
        cout << "Marks: " << marks << "\n";
    }
};

int main() {
    Student student;
    student.inputStudent();

    cout << "\nStudent Details:\n";
    student.displayStudent();

    return 0;
}
