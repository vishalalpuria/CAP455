#include <iostream>
using namespace std;
int x = 1;
class man
{   
public:
    man()
    {
        cout << "number of objects created: " << x << endl;
        x++;
    }
    
    ~man()
    {   x--;
        cout << "number of objects exist: " << x << endl;
    }
};
void manageObjects()
{   
    int t ;
    cin >>t;
    man obj[t];
    for(int i = 0; i < t; i++)
        obj[i];
    x = x-1;
}
int main()
{   
    manageObjects();
    return 0;
}