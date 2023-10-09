#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    int x = 0;
    char x1;
    cin >> x;
    cin >> x1;
    void*ptr = &x;

    if(*(int *)ptr >=1)
        cout << "The number is positive.";
    else if (*(int *)ptr <=-1)
        cout << "The number is negative.";
    else if(*(int *)ptr==0)
        cout << "The number is zero.";

    if(isalpha(x1))
        cout << "\nThe character is an alphabet.";
    else if(isdigit(x1))
        cout << "\nThe character is a number.";
    else
        cout << "\nThe character is not a number or an alphabet.";
    return 0;
}





