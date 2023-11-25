#include <iostream>
#include <iomanip>
using namespace std;
class Test
{
    float f;

public:
    void get()
    {
        cin >> f;
    }

    float disp()
    {
        return f;
    }
    void operator+()
    {

        f = (float)9/5 * f + 32;
        cout << fixed << setprecision(1) << f << "°F" << endl;
    }

    void operator-()
    {
        f = -(f * (9.0 / 5.0)) + 32;
        cout << f << "°F" << endl;
    }
};
int main()
{
    float r;
    Test obj;
    obj.get();
    +obj;
    -obj;
    return 0;
}