#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int a, b, c;
    cin >> a >> b >> c;
    cout << "Modified string after append: " << s.append(s1);
    cout << "\nModified string after insert: " << s.insert(a, s2); //index where to insert 
    cout << "\nModified string after erase: " << s.erase(b,c); // start,stop

    return 0;
}