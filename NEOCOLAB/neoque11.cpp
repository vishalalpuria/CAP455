#include <iostream>
using namespace std;
class Demo
{
private:
    static int x;
    static int y;

public:
    static void get()
    {
        cin >> x >> y;
    }
    static void fun()
    {
        cout << "Value of X: " << x << endl;
        cout << "Value of Y: " << y << endl;
    }
};

int Demo::x = 10;
int Demo::y = 20;

int main()
{
    Demo ob;
    ob.fun();
    ob.get();
    ob.fun();
    return 0;
}
