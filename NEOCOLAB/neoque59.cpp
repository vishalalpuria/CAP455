#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a;
    int b;
    cin >> a >> b;

    ofstream obj;
    obj.open("sum.txt");
    obj << "Sum: " << a+b;
    obj.close();
    cout << "Sum successfully written to the file 'sum.txt'. \n";
    cout << "Sum: " << a+b;
    return 0;
}