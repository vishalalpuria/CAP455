#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{   
    // string s = "hello 123 check";
    const char* data = "tttt, this is a test.";
    fstream obj; // but file phle se honi chaiye tab ye work karega 
    obj.open("z_this.txt",ios::in|ios::out);
    obj.write(data,strlen(data));


    //Reading part now
    obj.seekg(0);
    char c;
    while(obj.eof()==0)
    {
        obj.get(c);
        cout << c;
    }

    
    obj.close();
    return 0;
}