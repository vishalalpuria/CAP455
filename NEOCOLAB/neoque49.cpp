#include <iostream>
using namespace std;
class Welcome
{
    public:
    
    Welcome(string n)
    {
        cout << "Welcome " << n << endl;
    }
};
class Hello
{
    public:
    Hello(string n)
    {   
        Welcome obj1(n);
        cout << "Hello " << n;
    }
};
int main()
{
    string x;
    cin >> x;
    Hello obj(x);
    return 0;
}