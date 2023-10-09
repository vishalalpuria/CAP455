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
    Circle obj[5];
    for(int i = 0; i < 5; i++)
    {   
        int x;
        cin >> x;
        obj[i].init(x);
    }
    for(int i = 0; i < 5; i++)
    {   
        int x;
        obj[i].cal();
        cout << obj[i].result() << endl;
    }
    return 0;
}