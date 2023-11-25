#include <iostream>
using namespace std;
class Test
{
    float avg;

public:
    void get(int a)
    {
        avg = a;
    }
    void disp()
    {
        cout << "Average = " << avg;
    }

    int operator > (Test M)
    {

        if(avg > M.avg)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

};

int main()
{
    Test obj1, obj2;
    obj1.get(6);
    obj1.get(9);

    if (obj1 > obj2)
        obj1.disp();
    else
        obj2.disp();
    return 0;
}