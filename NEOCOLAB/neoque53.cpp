#include <iostream>
using namespace std;
class Professor
{
    int id, sal;
    string name;

public:
    int getsal()
    {
        return sal;
    }
    void get()
    {
        cin >> id;
        cin >> name;
        cin >> sal;
    }
    void display()
    {
        cout << id << " " << name << " " << sal << endl;
    }
};
int main()
{
    int x;
    cin >> x;
    Professor obj[x];
    for (int i = 0; i < x; i++)
        obj[i].get();
    for (int i = 0; i < x; i++)
    {
        if (obj[i].getsal() >= 20000)
            obj[i].display();
    }

    return 0;
}