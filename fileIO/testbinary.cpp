#include <iostream>
#include <fstream>

int main() {
    // Open a binary file for reading
    std::ifstream inFile("sample.txt", std::ios::binary);

    if (!inFile.is_open()) {
        std::cerr << "Failed to open the file for reading." << std::endl;
        return 1;
    }

    // Read characters from the file one by one
    char ch;
    while (inFile.get(ch)) {
        std::cout << "Read character: " << ch << std::endl;
    }

    // Check for errors during reading
    if (!inFile.eof()) {
        std::cerr << "Error occurred while reading from the file." << std::endl;
        return 1;
    }

    // Close the file
    inFile.close();

    return 0;
}
