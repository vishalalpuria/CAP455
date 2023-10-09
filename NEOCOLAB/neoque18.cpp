#include <iostream>
#include <iomanip>
using namespace std;
void calc(int s)
{
    cout << "Square of " << s << ": " << s * s;
}
void calc(int x, int y)
{
    cout << "Modulus of " << x << "," << y << ": " << x % y;
}
void calc(float x, float y)
{
    cout << "Quotient of " << x << "," << y << ": " << fixed << setprecision(2) << x / y;
}
int main()
{
    int a, b;
    float c, d;
    cin >> a >> b;
    cin >> c >> d;
    calc(a);
    calc(a, b);
    calc(c, d);
    return 0;
}