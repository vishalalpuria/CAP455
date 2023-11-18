#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int rollno;
    string name;
    int perc;

public:
    void get()
    {
        cin >> rollno;
        cin >> name;
        cin >> perc;
    }
    void display()
    {
        cout << "Roll No. : " << rollno << endl;
        cout << "Name : " << name << endl;
        cout << "Marks : " << perc << endl;
    }
    string ret_string()
    {
        string tmp = to_string(rollno);
        string tmp1 = to_string(perc);
        tmp = tmp + " ";
        tmp = tmp + name;
        tmp = tmp + " ";
        tmp = tmp + tmp1;
        return tmp;
    }
};

int main()
{
    int x;
    cin >> x;
    student obj[x];
    for (int i = 0; i < x; i++)
    {
        obj[i].get();
    }

    cout << "Reading Student information to the file :-\n";
    for (int i = 0; i < x; i++)
    {
        obj[i].display();
    }

    ofstream file;
    file.open("sample.txt");
    for (int i = 0; i < x; i++)
    {
        file << obj[i].ret_string();
        file << " ";
    }
    file.close();

    return 0;
}