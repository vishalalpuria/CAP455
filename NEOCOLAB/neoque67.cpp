#include <iostream>
#include <fstream>

using namespace std;
int main()
{   

    ofstream obj("sample.txt");
    obj << "Time Is a great teacher but Unfortunately it kills all its pupils.";
    obj.close();


    ifstream file;
    file.open("sample.txt",ios::binary);
    char ch;
    while(file.get(ch))
    {   
        cout << ch;
    }
    file.close();
    file.open("sample.txt",ios::binary);
    while(file.get(ch))
    {   cout << "\n";
        if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U')
            cout << "#";
        else
            cout << ch;
    }
    file.close();
    return 0;
}