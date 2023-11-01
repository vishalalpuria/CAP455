#include <iostream>
using namespace std;

class Box
{
    double w, h, d;
public:
    Box()
    {
        w = h = d = 0;
    }
    Box(double len)
    {
        ;
    }
    Box(double w1, double h1, double d1)
    {
        w = w1;
        h = h1;
        d = d1;
    }
    double volume()
    {
        return (w * h * d);
    }
    double volume(double v1)
    {
        return (v1*v1*v1);
    }
    void display(double v)
    {
        cout << "Volume of mybox1 is 0";
        cout << "\nVolume of mybox2 is " << volume();
        cout << "\nVolume of mycube is " << volume(v);
    }
};

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    Box obj(a,b,c);
    obj.display(d);
    return 0;
}