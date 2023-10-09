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
    return 0;
}