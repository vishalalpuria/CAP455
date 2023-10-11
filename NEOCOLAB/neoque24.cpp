#include <iostream>
#include <cstring>
using namespace std;

int countWords(char** input) {
    int wordCount = 0;
    bool inWord = false;

    while (**input) {
        if (isspace(**input)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordCount++;
        }
        (*input)++;
    }

    return wordCount;
}

int main() {
    const int maxLen = 1000;
    char input[maxLen];
    cin.getline(input, maxLen);

    char* inputPtr = input;
    int res = countWords(&inputPtr);
    cout <<res << endl;

    return 0;
}