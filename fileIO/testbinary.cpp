#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open a binary file for reading
    ifstream inFile("sample.txt", ios::binary);

    if (!inFile.is_open()) {
        cerr << "Failed to open the file for reading." << endl;
        return 1;
    }

    // Read characters from the file one by one
    char ch;
    while (inFile.get(ch)) {
        cout << "Read character: " << ch << endl;
    }

    // Check for errors during reading
    if (!inFile.eof()) {
        cerr << "Error occurred while reading from the file." << endl;
        return 1;
    }

    // Close the file
    inFile.close();

    return 0;
}
