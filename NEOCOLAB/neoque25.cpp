#include <iostream>
using namespace std;
#include <iomanip>

void calculateExpences(int b1, int t1, int f1, int l1)
{
    float sum = float(b1+t1+f1+l1);
    cout << "Total expenses : Rs." << fixed << setprecision(2) << (sum);
    cout << "\nBranding expenses percentage: " << (b1/sum) * 100;
    cout << "\nTravel expenses percentage: " << (t1/sum) * 100;
    cout << "\nFood expenses percentage: " << (f1/sum) * 100;
    cout << "\nLogistics expenses percentage: " << (l1/sum) * 100;
}

int main()
{
    unsigned int b, t, f, l;
    unsigned int total;
    cin >> b >> t >> f >> l;
    calculateExpences(b,t,f,l);
    return 0;
}