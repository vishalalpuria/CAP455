#include <iostream>
using namespace std;
int main()
{
    unsigned int d, m, y, h, min;
    cin >> h >> min >> d >> m >> y;

    if ((d > 0 and d <= 31) and (m > 0 and m <= 12) and (y > 0 and y < 9999) and (h > 0 and h <=24) and (min > 0 and min < 60))
    {   
        int tm = 0;
        tm = h*60 + min;
        cout << "Date:" << d << "-"<<m<<"-"<<y <<"\n";
        cout << "Time:" << h << " hrs"<<min<<" mins\n";
        cout << "Total mins:" << tm;
    }
    else
        cout << "Invalid";
}