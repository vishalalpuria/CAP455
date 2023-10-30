#include <iostream>
using namespace std;
class Person
{
private:
    int age;
    string name;
public:
    Person()
    {
        cout << "Default constructor is called\n";
    }
    void setname()
    {
        cin >> name;
    }
    void setage()
    {
        cin >> age;
    }
    void display()
    {
        cout << "Name of current object: " << name << endl;
        cout << "Age of current object: " << age << endl;
    }
};
int main()
{
    Person obj;
    obj.setname();
    obj.setage();
    obj.display();
    return 0;
}