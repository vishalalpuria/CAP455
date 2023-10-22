#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{
    string n;
    float r, sal;
    int h;

public:
    void get()
    {
        cin >> n;
        cin >> r;
        cin >> h;
    }
    void display()
    {
        if (h > 40)
        {   
            sal = sal + (h * r);
            h = h-40;
            sal = sal + ((h * 1.5) * r);
        }
        else
            sal = sal + (h * r);
        cout << "\nEmployee Name: " << n;
        cout << "\nSalary: " << sal;
    }
};
int main()
{
    int maxEmployees;
    cin >> maxEmployees;
    Employee obj[maxEmployees];
    for (int i = 0; i < maxEmployees; i++)
    {
        obj[i].get();
    }
    cout << "Employee Information: ";
    for (int i = 0; i < maxEmployees; i++)
    {
        obj[i].display();
    }

    return 0;
}