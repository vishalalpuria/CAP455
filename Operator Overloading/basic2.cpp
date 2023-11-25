#include <iostream>
using namespace std;
class ABC
{
    int var1, var2;

public:
    ABC()
    {
        var1 = 0;
        var2 = 0;
    }
    void get(int a, int b)
    {
        var1 = a;
        var2 = b;
    }
    int disp()
    {
        cout << var1 << " " << var2;
    }

    ABC operator+(ABC M)
    {
        ABC T;
        T.var1 = var1 + M.var1;
        T.var2 = var2 + M.var2;
        return T;
    }
};
int main()
{
    int r;
    ABC obj1, obj2, obj3;
    obj1.get(10, 15);
    obj2.get(20, 25);

    obj3 = obj1 + obj2;
    obj3.disp();

    return 0;
}