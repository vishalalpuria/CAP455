#include <iostream>
using namespace std;

class Time
{
    public:

    void display(int h,int m)
    {
        cout << (h*60)+m;
    }
};
int main()
{
    Time *obj;
    int h,m;
    cin >> h >> m;
    obj->display(h,m);
    return 0;
}