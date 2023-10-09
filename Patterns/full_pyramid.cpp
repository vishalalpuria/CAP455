// write a program to print the following series - full pyramid
//     1
//    121
//   12321
//  1234321
// 123454321


#include <iostream>
using namespace std;

int main()
{
    // int tmp = 1;
    int sp = 4;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= sp; i++)
        {
            cout << " ";
        }
        for(int k = 1; k <= 5-sp ; k++)
        {
            cout << k;
        }
        for(int p = 4-sp;p >= 1;p--)
        {
            cout << p;
        }
        // tmp ++;
        cout << endl;
        sp--;
    }
    int sp2 = 1;
    for(int x = 4;x >=1;x--)
    {
        for(int g = 1; g <=sp2;g++)
            cout << " ";
        for(int y = 1;y <= x;y++)
        {
            cout << y;
        }
        for(int g = 4-sp2;g >=1;g--)
        {
            cout <<g;
        }
        sp2++;
        cout << endl;
    }
    return 0;
}
