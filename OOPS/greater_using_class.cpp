#include <iostream>
using namespace std;

class xyz;
class abc
{
    int a;

public:
    void get()
    {
        cin >> a;
    }
    friend void greater(abc, xyz);
};
class xyz
{
    int x;

public:
    void get()
    {
        cin >> x;
    }
    friend void greater(abc, xyz);
};
void greater(abc m, xyz n)
{
    if (m.a > n.x)
        cout << "Greater = " << m.a;
    else
        cout << "Greater = " << n.x;
}
int main()
{
    abc obj1;
    xyz obj2;
    obj1.get();
    obj2.get();
    greater(obj1, obj2);
}
