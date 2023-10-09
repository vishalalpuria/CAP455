#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    // cout << x << "\n";

    int * ptr;
    ptr = &x;
    cout << x << '\n';      
    cout << &x << '\n';     //address of x
    cout << ptr << '\n';    
    cout << &ptr << '\n';   //address of ptr
    cout << *ptr << '\n';   //value at (ptr)

    int **ptr1 = &ptr;
    **ptr1 = 20;
    cout << x;

    return 0;
}