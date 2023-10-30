#include <iostream>
using namespace std;
class Z
{   
public:
    Z()
    {
        cout << "Constructor called\n";
    }
    ~Z()
    {
        cout << "Destructor called\n";
    }
};
void manageObjects()
{   
    int x ;
    cin >>x;
    Z obj[x];
    for(int i = 0; i < x; i++)
        obj[i];
}
int main()
{   
    manageObjects();
    return 0;
}