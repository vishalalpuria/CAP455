#include <iostream>
using namespace std;

template <class T> // this is for same nature like- int int , double double, string string
T add(T a, T b)
{
    T result = a + b;
    return result;
}

int main()
{   
    string s = "hello ";
    string s1 = "there ";
    cout << add(10, 10) << endl;
    cout << add(1.12, 2.3) << endl;
    
    
    return 0;
}