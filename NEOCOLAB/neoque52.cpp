#include <iostream>
using namespace std;

class student
{
    int n1;
    string s1;
    double d1;

public:
    student(int,string,double);  //constructor definition 
    student(const student&);  //copy constructor definition 
    void display(void); 
    
};
    student::student(int n, string s, double d)
    {
        //default constructor
        n1 = n;
        s1 = s;
        d1 = d;
    }
    student::student(const student &t)
    {   
        //copy constructor
        int n1 = t.n1;
        string s1 = t.s1;
        double d1 = t.d1;
        cout << "Copied Student Details:\n";
        cout << n1 << " " << s1 << " " << d1;
    }
    void student::display(void)
    {
        std::cout << "Student Details:\n";
        std::cout << n1 << " " << s1 << " " << d1 << endl;
    }
    
int main()
{
    int n;
    string s;
    double d;
    cin >> n;
    cin >> s;
    cin >> d;

    student obj(n, s, d);
    obj.display();
    student obj1(obj);

    return 0;
}