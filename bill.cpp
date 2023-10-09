#include <iostream>
using namespace std;

// free unit for d - 100
// free unit for c - 200

// fix rent for d - 100
// fix rent for c - 500

// total bill domenstic used 5000 then add 5% of the amount
// total bill commercial used 5000 then add 10% of the amount
class bill
{
int type,unit,charge=0;
int fixrent_d = 100;
int fixrent_c = 500;
public:
    void calc(int u,int t) //unit and type 
    {
        unit = u,type = t;
        if (type == 1) // for domestic
        {
            if (unit >= 101)
            {
                unit = unit - 100;
                charge = unit * 5;
                charge = charge + fixrent_d;
            }
            else
            {
                charge = charge + fixrent_d;
            }
            if (charge >= 5001)
                charge = charge + charge * 0.05;
        }
        else if (type == 2) // for commercial
        {

            if (unit >= 201)
            {
                unit = unit - 200;
                charge = unit * 10;
                charge = charge + fixrent_c;
            }
            else
            {
                charge = charge + fixrent_c;
            }
            if (charge >= 10001)
                charge = charge + charge * 0.10;
        }
    }
    void display(int u,int t) //unit and type 
    {
        cout << "UNITS" << '\t' << "type" << '\t' << "CHARGE\n";
        cout << u << '\t' << t << '\t' << charge;
    }
};
int main()
{
    int un,ty;
    bill obj;
    int flag = 1;
    while (flag)
    {   
        cout << "Enter the type of customer 1-domestic, 2-commercial\n";
        cin >> ty;
        cout << "Enter the units used\n";
        cin >> un;
        obj.calc(un,ty); // passing unit and costumer type
        obj.display(un,ty);
        cout << "\nEnter 1 - to continue/0 - to exit \n";
        cin >> flag;
    }

    return 0;
}