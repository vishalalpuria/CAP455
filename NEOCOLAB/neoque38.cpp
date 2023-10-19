#include <iostream>
using namespace std;
int main()
{
    string s, s2, s3;
    int a, b, c;

    getline(cin, s);
    getline(cin, s2);
    getline(cin, s3);

    cin >> a >> b >> c;

    cout << "Modified string after replace: " << s.replace(s.find(s2),s2.length(),s3); 
    cout << "\nSubstring: " << s.substr(a,b); 
    s.resize(c);
    cout << "\nResized string: " << s; 

    return 0;
}