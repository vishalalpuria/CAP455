#include <iostream>
#include <math.h>
using namespace std;
class Demo
{
    int num1;
    public:
    Demo(int a)
    {
        cout << "Inside Constructor\n";
        num1 = a;
    }
    void display()
    {
        cout << "square = "<<num1*num1<< endl;
        cout << "square root= "<<sqrt(num1)<< endl;
        cout << "cube = "<<num1*num1*num1<< endl;
        cout << "cube root = "<<cbrt(num1)<< endl;
    }
    ~Demo()
    {
        cout << "Inside Destructor";
    }
};
int main()
{   
    int c;
    cin >> c;
    Demo obj(c);
    obj.display();

    return 0;
}