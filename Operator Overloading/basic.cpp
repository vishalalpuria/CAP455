#include <iostream>
using namespace std;
class ABC
{
    int var1;
    public:
    ABC()
    {
        var1 = 0;
    }
    void get(int a)
    {
        var1 = a;
    }
    int disp()
    {
        return var1;
    }

    ABC operator + (ABC M)
    {
        ABC T;
        T.var1 = var1 + M.var1;
        return T;
    }


};
int main()
{
    int r;
    ABC obj1,obj2,obj3;
    obj1.get(20);
    obj2.get(30);
    
    obj3 = obj1 + obj2;
    
    r = obj3.disp();
    cout << "value of r " << r;
    return 0;
}