#include <iostream>
using namespace std;

int checkPointer(int* ptr, int defaultValue) 
{
    if(ptr == nullptr)
    {    
        return defaultValue;
    }
    else
    {   
        return *ptr;
    }
}
int main()
{
    int x ;
    cin >> x;
    int *ptr=nullptr;
    cout << "Result: " << checkPointer(ptr,0);
    ptr = &x;
    cout << "Result: " << checkPointer(ptr,0);
    return 0;
}