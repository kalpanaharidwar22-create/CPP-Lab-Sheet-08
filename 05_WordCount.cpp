#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Function to count words in a string
int countWords(string sentence) {
    stringstream stream(sentence);
    string word;
    int count = 0;

    while (stream >> word) count++;
    return count;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Number of words: " << countWords(sentence);
    return 0;
}
