#include <iostream>
#include <cstring>
using namespace std;

int countWords(char **input)
{
    int wordCount = 1;
    while (**input)
    {
        if (isspace(**input))
            wordCount++;
        (*input)++;
    }

    return wordCount;
}

int main()
{
    const int maxLen = 1000;
    char input[maxLen];
    cin.getline(input, maxLen);

    char *inputPtr = input;
    int res = countWords(&inputPtr);
    cout << res << endl;

    return 0;
}
