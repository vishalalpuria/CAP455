#include <iostream>
using namespace std;

int main()
{
    int sum(int, int); // this will considered in the turbo compiler because it is decleared first 
    float sum(float, float);
    cout << sum(10.5f, 2.3f) << endl;
    cout << sum(12, 5);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b)
{
    return a + b;
}