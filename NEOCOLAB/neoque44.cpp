#include<iostream>
#include <cstring>
using namespace std;
void concatenateStrings(string a,string b)
{
    cout << a+b;
}
int main()
{
    string n1,n2;
    cin >> n1;
    cin >> n2;
    concatenateStrings(n1,n2);
    return 0;
}