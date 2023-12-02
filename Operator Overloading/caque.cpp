#include <iostream>
#include <iomanip>

using namespace std;

class Acceleration
{
    private:
    double val;

    public:
    void get()
    {
        cin >> val;
    }
    double operator/(Acceleration other)
    {
        double result = val/other.val;
        return result; 
    }
};
int main()
{   
    Acceleration vel,time;
    vel.get();
    time.get();

    double r = vel/time;
    cout << fixed << setprecision(2);
    cout << r <<" m/s^2";

    return 0;
}