#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    char c;
    cin >> c;

    s.push_back(c);
    cout << "Modified string after push back: " << s;
    s.pop_back();
    cout << "\nModified string after pop back: " << s;
    return 0;
}
