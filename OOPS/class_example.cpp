#include <iostream>
using namespace std;
#define PI 3.14
class Circle
{
private:
    int r;
    float area;

public:
    void init(int x)
    {
        r = x;
    }
    void cal(void);
    float result();
    int fun()
    {
        // return r;

        // or we can write this
        // return this ->r;
        // or 
        return (*this).r;

    }
};
void Circle::cal(void)
{
    area = PI * r * r;
}
float Circle ::result()
{
    return area;
}
int main()
{
    Circle obj;
    obj.init(5);
    obj.cal();
    cout << "Area = " << obj.result();


    cout <<"\nvalue returned by fun : "<< obj.fun();
    return 0;
}