#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Circle
{
    double r;
} c1;
int main()
{
    cin >> c1.r;
    cout << fixed << setprecision(2) << (2*3.14*c1.r)<<endl;
    cout << fixed << setprecision(2) << (3.14*c1.r*c1.r);
    return 0;
}