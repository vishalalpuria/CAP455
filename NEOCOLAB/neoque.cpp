#include <iostream>
using namespace std;
int main()
{
    int i, y, c, a, s;
    cout << ("Enter the value of X\n");
    cin >> i;
    cout << ("Enter the value of Y\n");
    cin >> y;
    c = (y - (5 * i)) / 13;
    a = i + c;
    s = (2 * c);
    cout << "Number of children tickets sold : " << c << endl;
    cout << "Number of adult tickets sold : " << a << endl;
    cout << "Number of senior tickets sold : " << s;
    return 0;
}
