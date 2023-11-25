#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string x;
    getline(cin, x);

    ofstream fout("sample.txt",fstream::in | fstream::app);
    fout << "Time is a Great Teacher BUT Unfortunately It Kills All Its Pupils "<< x;
    cout << "Data appended successfully\n";
    fout.close();

    ifstream fin("sample.txt");
    while(fin.eof() == 0)
    {
        string g;
        getline(fin,g);
        cout << g;
    }
    fin.close();
    return 0;
}