#include <iostream>
using namespace std;
struct patient
{
    int id,age,gen;
    int cnt_40p;
    int cnt_m,cnt_f;

};
void print_gender(int g_m, int g_f)
{
    cout << g_m << " " << g_f;
}
void print_age(int a)
{
    cout << endl << a;
}
int main()
{   
    patient p1;
    int n = 0;
    p1.cnt_40p = 0;
    p1.cnt_f = 0;
    p1.cnt_m = 0;
    cin >>n;
    for(int i = 0; i < n; i++)
    {
        cin >> p1.id >> p1.gen >> p1.age; 

        if(p1.age > 40)
            p1.cnt_40p++; 
        (p1.gen==1)?p1.cnt_m++:p1.cnt_f++;
    }
    print_gender(p1.cnt_m,p1.cnt_f);
    print_age(p1.cnt_40p);
    
    return 0;
}