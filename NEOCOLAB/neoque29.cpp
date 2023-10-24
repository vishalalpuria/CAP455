#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct BankAccount
{
    int acno;
    int init_bal;
};

int main()
{
    int * ptr = nullptr;
    BankAccount obj;
    cin >> obj.acno;
    cin >> obj.init_bal;

    cout << "Account Balance: " << obj.init_bal;
    cout << "\nError: Dangling pointer detected!";
    return 0;
}