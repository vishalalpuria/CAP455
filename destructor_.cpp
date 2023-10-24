
#include <iostream>
using namespace std;
int c = 0;
class A
{
    public:
    A()
    {
        c++;
        cout <<c<< " Constructed\n";
    }
    ~A()
    {
        cout <<c<< " Destructed\n";
        c--;
    }
};
int main()
{
    A obj;
    {
        A obj2;
    }
    A obj3,obj4;
    return 0;
}