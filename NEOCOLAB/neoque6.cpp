#include <iostream>
#include <string>

using namespace std;
int main()
{
    int age;
    string n,g;
    
    cin >> n;
    cin >> age;
    cin >> g;

    for (int x=0; x<n.length(); x++)
        putchar(toupper(n[x]));
    cout << " " <<age<< " ";
    for (int x=0; x<g.length(); x++)
        putchar(toupper(g[x]));
    return 0;
}