#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    ofstream obj;
    obj.open(s);
    if(obj.is_open() == 1)
        cout << "File 'sample.txt' opened successfully.";
    obj.close();
    if(obj.is_open() == 0)
        cout << "\nFile 'sample.txt' closed successfully.";
    return 0;
}