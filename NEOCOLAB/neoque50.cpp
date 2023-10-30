#include <iostream>
using namespace std;
class Over
{
public:
    Over()
    {
        cout << "Object 1:\nTemperature: 0°\n";
    }
    void displayDetails()
    {
        cout << "Object 1:\nTemperature: 0°\n";
    }
    void displayDetails(string x, int temp)
    {
        cout << "Object 2:\n"
             << x << " Temperature: " << temp << "°\n";
    }
    void displayDetails(string x, string y, int temp)
    {
        cout << "Object 3:\n"
             << x << " " << y << " Temperature: " << temp << "°\n";
    }
};
int main()
{
    string s;
    int t;

    Over obj;

    cin >> s;
    cin >> t;
    obj.displayDetails(s,t);

    string s2,s3;
    int a;
    cin >> s2;
    cin >> s3;
    cin >> a;
    
    obj.displayDetails(s2,s3,a);

    return 0;
}