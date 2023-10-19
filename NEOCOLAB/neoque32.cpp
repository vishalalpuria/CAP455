#include <iostream>
using namespace std;
class Student
{
    public:
    int x=10;
    string name;

    void display()
    {
        cout << this->x;
    }
};
int main()
{   
    int Student::*ptr = &Student::x;
    string Student::*ptr1 = &Student::name;
    Student obj;

    string n;
    getline(cin,n);
    int a,b;
    cin >> a >> b;

    obj.*ptr1 = n;

    obj.*ptr = a;
    cout << "Current age: " << obj.*ptr;
    obj.*ptr = b;
    cout << "\nUpdated age: " << obj.*ptr;

    return 0;
}