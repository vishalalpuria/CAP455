#include <iostream>
using namespace std;
int fact(int n)
{
    if(n>1)
    {
        return fact(n-1) * n;
    }
}
int main()
{
    int a,x ;
    cin >> a;
    x = fact(a);
    cout << x;
    return 0;
}