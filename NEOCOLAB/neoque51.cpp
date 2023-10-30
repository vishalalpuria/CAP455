#include <iostream>
using namespace std;
class Base
{   
    public:
    Base()
    {
        cout << "Base class constructor\n";
    }
    void setValue(int x)
    {
        cout << "Value Set: " << x << endl;
    }
};
class InitilizerList
{
    int y;
    public:
    InitilizerList(int x)
    {
        Base obj;
        obj.setValue(x);
        cout << "InitilizerList's Constructor";
    }
};
int main()
{   
    int c;
    cin >> c;
    InitilizerList ob(c);
    return 0;
}