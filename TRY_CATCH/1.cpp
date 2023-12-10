#include <iostream>
using namespace std;
int main()
{
    try
    {
        int x = 10;
        int y = 0;
        if(y == 0 )
        {
            throw runtime_error("kya kr rhe ho bhai");
        }
        int result = x/y;
    }
    catch(const exception& e)
    {
        cout << e.what() << '\n';
    }
    
    return 0;
}