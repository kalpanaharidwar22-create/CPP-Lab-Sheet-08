#include <iostream>
#include <string>
using namespace std;

// Function to copy one string into another
void copyString(string source, string &destination) {
    destination = source;
}

int main() {
    string source, destination;
    cout << "Enter a string: ";
    getline(cin, source);

    copyString(source, destination);

    cout << "Copied string: " << destination;
    return 0;
}
