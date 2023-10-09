#include <iostream>
using namespace std;

inline int isLeapYear(int year){
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        cout << year << " is a leap year.";
    else
        cout << year << " is not a leap year.";
    return 0;}
int main()
{
    unsigned int y = 0;
    cin >> y;
    isLeapYear(y);
}