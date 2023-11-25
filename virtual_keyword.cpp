#include <iostream>
using namespace std;

class X
{
public:
    int x = 10;
};
class A : virtual public X
{   
    
};
class B : virtual public X
{
    
};
class C : public A, public B
{
};

int main()
{   
    // by placing virtual a simgle copy of x is shared between class a and class b
    C obj;
    cout << obj.x;
    return 0;
}