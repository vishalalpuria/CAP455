#include <iostream>
using namespace std;
class dayOfWeek
{
private:
    int x;
public:
    void input()
    {
        cin >> x;
    }
    void display()
    {
        switch (x)
        {
        case 0:
            cout << "Weekend";
            break;
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Saturday";
            break;

        default:
            cout << "Invalid";
            break;
        }
    }
};
int main()
{
    dayOfWeek obj;
    obj.input();
    obj.display();
    return 0;
}