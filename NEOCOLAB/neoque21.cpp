#include <iostream>
using namespace std;
int reverseNumvber(int &n)
{   
    int rev = 0;
    int tmp = *(&n);
    while (tmp != 0)
    {
        int t = tmp % 10;
        rev = rev*10 + t;
        tmp = tmp /10;
    }
    cout <<rev;
}
int main()
{
    int x;
    cin >> x;
    reverseNumvber(x);
    return 0;
}