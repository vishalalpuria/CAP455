#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return (a + b);
}
int main()
{
    int (*ptr)(int, int);
    ptr = &sum;
    int r = (*ptr)(100, 200); // function calling using pointer
    cout << r;
    return 0;
}