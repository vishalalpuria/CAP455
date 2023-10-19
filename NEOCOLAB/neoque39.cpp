#include <iostream>
#include <iomanip>

using namespace std;

class Money
{
    float rupees,paisa;
    public:
    void setter(float r,float p)
    {   
        rupees = r;
        paisa = p;
    }
    float get_rupees()
    {
        return rupees;
    }
    float get_paisa()
    {
        return paisa;
    }

};
int main()
{
    Money obj[2];

    float r,p;
    cin >> r >> p;
    p = p/100;
    obj[0].setter(r,p);
    cin >> r >> p;
    p = p/100;
    obj[1].setter(r,p);
    
    cout << fixed << setprecision(2);
    cout << obj[0].get_rupees() + obj[0].get_paisa() +  obj[1].get_rupees()+obj[1].get_paisa();


    return 0;
}