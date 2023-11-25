#include <iostream>
using namespace std;
class Arithmetic
{
    float img, real;
    public:

    Arithmetic(double r,double i)
    {
        img = i;
        real = r;
    }

    Arithmetic operator +(Arithmetic other)
    {
        return (Arithmetic(real + other.real,img + other.img));
    }
    Arithmetic operator -(Arithmetic other)
    {
        return (Arithmetic(real - other.real,img - other.img));
    }
    void disp()
    {
        if(img < 0)
            cout << real << " - " << (img) << "i" << std::endl;
        else
            cout << real << " + " << (img) << "i" << std::endl;
    }


};
int main()
{
    float a,b,c,d;
    cin >> a >> b >> c >> d;
    Arithmetic obj1(a,b);
    Arithmetic obj2(c,d);

    Arithmetic sum = obj1+obj2;
    sum.disp();
    sum = obj1-obj2;
    sum.disp();
    return 0;
}