#include <iostream>
using namespace std;
class abc
{
    private:
    int x,y;
    public:
    void get()
    {
        cin >> x >> y;
    }
    void display()
    {
        cout << x+y;
    }
    friend void sum(void);
};
void sum(void)
{ 
    // This is a friend function 
    abc obj;
    obj.get();
    obj.display();
}
int main()
{
    sum();
    return 0;
}