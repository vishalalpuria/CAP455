#include <iostream>
using namespace std;

int main()
{
    long l;
    cin >> l;

    int d = l%100;
    int m = l%10000;
    m= m/100;
    int y = l/10000;

    if(y < 1)
        cout << "Invalid date entered.";
    else if(m < 1 || m > 12)
        cout << "Invalid date entered.";
    else if(d < 1 || d > 31)
        cout << "Invalid date entered.";
    else
    {   
        if(m <= 9 and d <=9)
            cout << "Date: 0" << d << "/0" << m << "/" << y;
        else if(d <= 9)
            cout << "Date: 0" << d << "/" << m << "/" << y;
        else if(m <= 9)
            cout << "Date: " << d << "/0" << m << "/" << y;
        else
            cout << "Date: " << d << "/" << m << "/" << y;
    }

    return 0;
}