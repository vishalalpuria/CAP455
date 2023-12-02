#include <iostream>
using namespace std;

template <class X,class Y>
void fun(X a, Y b)
{
    cout << "value of a = " << a << endl;
    cout << "value of b = " << b << endl;
}

int main()
{
    fun("hello",20);
    fun(6.7,20);
    fun("hello",true);
    return 0;
}

