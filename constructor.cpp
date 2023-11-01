// how to call parameterised constructor of the parent class from the decived class 

#include <iostream>
using namespace std;
class Base
{
    public:
    Base(int a)
    {   
        cout << a << " In Base\n";
    }
};
class Child : public Base
{
    public:
    Child(int x): Base(10) // To call the Parent class constructor 
    {
        cout << x << " In Child";
    }
};

int main()
{
    Child obj(20);
    return 0;
}