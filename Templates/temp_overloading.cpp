#include <iostream>
using namespace std;
template <class X>
void fun(X a)
{
    cout << "Value of a = " << a << endl;
}

template <class X,class Y>
void fun(X b,Y c)
{
    cout << "Value of b = " << b << endl;
    cout << "Value of c = " << c << endl;
}
int main()
{
    // fun(10);
    // fun(10.2);
    fun("hi");
    fun(10.4,60.65);
    return 0;
}