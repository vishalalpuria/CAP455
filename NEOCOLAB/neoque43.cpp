#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(const string& str)
{
    string copy = str;

    reverse(copy.begin(), copy.end());
    if (str == copy)
        return 1;
    else
        return 0;
}
int main()
{
    string x;
    cin >> x;

    if (isPalindrome(x))
        cout << "The string is palindrome.";
    else
        cout << "The string is not palindrome.";

    return 0;
}