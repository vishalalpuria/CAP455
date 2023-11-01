#include <iostream>
using namespace std;
class Demo
{
    int num1,num2;
    public:
    Demo(int a,int b)
    {
        cout << "Inside Constructor\n";
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << num1 << endl;
        cout << num2 << endl;
    }
    ~Demo()
    {
        cout << "Inside Destructor";
    }
};
int main()
{   
    int c,d;
    cin >> c >> d;
    Demo obj(c,d);
    obj.display();

    return 0;
}