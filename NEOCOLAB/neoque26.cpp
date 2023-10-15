#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
class Student
{
    string name;
    float avg;

public:
    void student1(string s)
    {
        name = s;
    }
    void avgfunc(float *ptr, int n)
    {
        for (int i = 0; i < n; i++)
            avg += ptr[i];
        avg = avg / (float)n;
    }
    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAverage marks: " <<fixed << setprecision(2) << avg;
    }
};

int main()
{   

    int n;
    cin >> n;
    Student* obj[50];

    for (int i = 0; i < n; i++)
    {
        obj[i] = new Student(); // to allocate space to the object
        string str;
        int sub;
        cin.ignore(); // to remove undesirable characters from the input buffer
        getline(cin,str);
        cin >> sub;
        float *ptr = (float *)malloc(sizeof(float) * sub);
        for (int i = 0; i < sub; i++)
            cin >> ptr[i];
        obj[i]->student1(str);
        obj[i]->avgfunc(ptr, sub);
    }
    cout << "Student Details:";
    for(int i = 0; i < n ; i++)
        obj[i]->display();
}