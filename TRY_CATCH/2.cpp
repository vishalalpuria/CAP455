#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        int x = a - b;
        if (x != 0)
        {
            cout << a / x;
        }
        else
        {
            throw(x);
        }
    }

    catch (int i)
    {
        cout << "Exception caught x = " << i;
    }
    return 0;
}