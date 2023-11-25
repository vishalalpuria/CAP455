#include <iostream>
using namespace std;

class Student
{   
    public:
    string n;
    int rollno,tmarks;
    int m1,m2,m3;
    void get()
    {   
        cin >> n >> m1 >> m2 >> m3;   
    }
    void display()
    {
        tmarks = m1+m2+m3;
        cout << "\nRoll Number: " << rollno;
        cout << "\nName: " << n;
        cout << "\nTotal Marks: " << tmarks;
    }
};
int main()
{   
    int numStudent;
    int sum=0;
    float avg;
    cin >> numStudent;
    Student obj[numStudent];
    for(int i = 0 ; i < numStudent; i++)
        obj[i].get();
    // cout << "Student Report Cards:\n";
    for(int i = 0 ; i < numStudent; i++)
    {
        obj[i].rollno = i+1;
        obj[i].display();
    }


    for(int i = 0 ; i < numStudent; i++)
    {
        sum = sum + obj[i].tmarks;
    }
    avg = (float)sum / numStudent;
    cout << "\nTotal marks of the class is: " << sum;
    cout << "\nThe average marks of the class is: " << avg;
    return 0;

}