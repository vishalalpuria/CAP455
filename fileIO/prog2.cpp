#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // for writing 
    // ofstream obj;
    // obj.open("sample2.txt");
    // obj << "This is content of sample 2";
    // obj.close();

    // for reading a file 
    ifstream obj1;
    string s;
    obj1.open("sample2.txt");
    // getline(obj1,s);
    // cout << s;

    // EOF wala tarika 
    while(obj1.eof() == 0)
    {
        getline(obj1,s);
        cout << s << endl;
    }
    obj1.close();
    return 0;
}