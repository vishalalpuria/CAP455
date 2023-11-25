#include <iostream>
using namespace std;
class base
{
    public:
    void disp()
    {
        cout << "\nIn the base class function";
    }
};
class child:public base
{
    public:
    void display()
    {
        cout << "\nIn the child class function";
    }
};
int main()
{
    base *ptr;
    ptr = new child(); // we can store the refrence of the child class in the base class pointer but NOT vice versa 
    ptr->disp(); // ok report
    // ptr->display(); // we cant do this 



    child *ptr1;
    ptr1 = new child();
    // ptr1->display(); // ok report


    return 0;
}