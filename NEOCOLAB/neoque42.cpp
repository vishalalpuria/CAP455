#include <iostream>
using namespace std;

class Student
{
    string n;
    int rollno,tmarks;
    int m1,m2,m3,m4,m5;
    public:
    void get()
    {   
        cin >> n >> rollno >> m1 >> m2 >> m3 >> m4 >> m5;   
    }
    void display()
    {
        tmarks = m1+m2+m3+m4+m5;
        cout << "Name: " << n;
        cout << "\nRoll Number: " << rollno;
        cout << "\nTotal Marks: " << tmarks;
    }
};
int main()
{   
    int numStudent;
    cin >> numStudent;
    Student obj[numStudent];
    for(int i = 0 ; i < numStudent; i++)
        obj[i].get();
    cout << "Student Report Cards:\n";
    for(int i = 0 ; i < numStudent; i++)
        obj[i].display();
    



}