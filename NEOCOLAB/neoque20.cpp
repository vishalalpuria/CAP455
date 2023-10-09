#include <iostream>
using namespace std;
int cube(int &n)
{
    int tmp = n;
    cout << tmp*tmp*tmp;
}
int main()
{
    int x;
    cin >> x;
    cube(x);
    return 0;
}