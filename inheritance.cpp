#include <iostream>
using namespace std;
class base
{
private:
    void pri_base()
    {
        cout << "in private of base";
    }

protected:
    void pro_base()
    {
        cout << "in protected of base";
    }

public:
    void pub_base()
    {
        cout << "in public of base";
    }

    void fun1()
    {
        cout << "This is fun1 in the class base";
    }

};
class child : public base // if we are not defined access specifier it will be PRIVATE by default
{
private:
    void pri_child()
    {
        cout << "in private of child";
    }

protected:
    void pro_child()
    {
        cout << "in protected of child";
    }

public:
    void pub_child()
    {
        cout << "in public of child";
    }

    void fun1()
    {
        cout << "This is fun1 in the class child";
        // this is an overridden function 
    }

};
int main()
{
    // base obj;
    // obj.pub_Base();

    child obj1;
    // obj1.pub_child();
    // obj1.pub_base();

    // obj1.fun1(); // by default it will call the base class function
    obj1.base::fun1(); // by the help of scope resolution operator we can handle function overriding
    return 0;
}