#include <iostream>
using namespace std;

struct test
{
    int x;
};
int main()
{
    struct test ob;
    struct test *ptr;
    ob.x = 30;
    // cout << ob.x;

    ptr = &ob;
    cout << ptr -> x << '\n'; // we can access this way also 

    (*ptr).x = 40; // changing the value of x using pointer 
    cout << ob.x;
    return 0;
}
