#include <iostream>
using namespace std;
int main()
{
    float a,b;
    a = 5.56f;
    int *ptr;

    ptr = (int *)&a;
    b = *(float *)ptr;
    cout << b;

}