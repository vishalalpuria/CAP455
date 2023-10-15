#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

class Point
{
public:
    float distanceTo(float x1, float y1, float x2, float y2)
    {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
    }
};
int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    Point obj;
    cout << fixed << setprecision(2) << obj.distanceTo(a, b, c, d);
    return 0;
}
