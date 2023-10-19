#include <iostream>
using namespace std;
class Input
{
    int x;
    public: 
    void get()
    {
        cin >> x;
    }
    void display()
    {
        int cnt = 0;
        while(x!=0)
        {
            x = x/10;
            cnt ++;
        }
        cout << cnt;
    }
};
int main()
{
    Input obj;
    obj.get();
    obj.display();
    return 0;
}
