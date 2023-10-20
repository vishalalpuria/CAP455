#include <iostream>
using namespace std;
class Test
{
    int a, b, c;

public:
    Test()
    {
        a = b = c = 0;
    }
    Test(int x, int y, int z)
    {
        //this is an overloaded constructor 
        a = x;
        b = y;
        c = z;
        cout << "This is constructor with argument overloaded";
    }
    Test(Test &PP) // if we write PP then the internal recursion will take place
    {
        a = PP.a;
        b = PP.b;
        c = PP.b;
        cout << "in &PP\n";
        cout << a;
    }
    void display()
    {
        cout << a;
        cout << b;
        cout << c;
    }
};
int main()
{
    // Test obj;
    Test obj1(10, 10, 20);
    Test PQ(obj1);
    return 0;
}