#include <iostream>
#include <fstream>

using namespace std;
int main()
{

    ofstream infile;
    string s;
    getline(cin,s);
    infile.open("gfg.data");
    infile << s;
    infile.close();


    ifstream obj1;
    obj1.open("gfg.data");
    while(obj1.eof() == 0)
    {
        getline(obj1,s);
        cout << s << endl;
    }
    obj1.close();
    return 0;
}