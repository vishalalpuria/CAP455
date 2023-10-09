#include <iostream>
#include <bits/stdc++.h>
using namespace std;
union Employee
{
    float sal;
};
int main()
{
    union Employee E1;
    int id;
    string name,dob,doj;
    cin >> id;
    cin >> name;
    cin >> dob;
    cin >> doj;
    cin >> E1.sal;

    cout << "ID : " << id;
    cout << "\nName : " << name;
    cout << "\nDOB : " << dob;
    cout << "\nDOJ : " << doj;
    cout << "\nSalary : " << fixed << setprecision(1)<< E1.sal;

    return 0;
}