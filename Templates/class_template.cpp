#include <iostream>
using namespace std;
template <class X>
class Test
{
private:
    X var1;
    X var2;

public:
    void get(X a, X b)
    {
        var1 = a;
        var2 = b;
    }
    void display()
    {
        cout << "value of var1 = " << var1;
        cout << "\nvalue of var2 = " << var2;
    }
};

int main()
{
    // Test<int> obj;
    // obj.get(10, 5);
    // obj.display();
    
    
    // Test<double> obj;
    // obj.get(10.8, 5.3);
    // obj.display();
    
    Test<string> obj;
    obj.get("hi","hello");
    obj.display();
    
    return 0;
}