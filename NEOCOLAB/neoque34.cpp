#include <iostream>
#include <iomanip>
using namespace std;
class Cube
{
    double len, br, he, area;

public:
    void setLen(double l)
    {
        len = l;
    }
    void setBreadth(double b)
    {
        br = b;
    }
    void setHeight(double h)
    {
        he = h;
    }
    void getVolume()
    {
        area = len * br * he;
        cout << fixed << setprecision(1) << area;
    }
};
int main()
{
    Cube ob;
    double len, br, he;
    cin >> len >> br >> he;
    ob.setLen(len);
    ob.setBreadth(br);
    ob.setHeight(he);
    ob.getVolume();
    return 0;
}