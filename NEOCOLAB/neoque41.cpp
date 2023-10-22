#include <iostream>
using namespace std;
class multiplicationGame
{
    int n, p, copy;
    int cnt;
public:
    void get()
    {
        cin >> n;
        copy = n;
    }
    int game()
    {   
        if(n == 1)
        {
            cout << copy << " Michael wins" << endl;
            return 0;
        }
        p = 1;
        cnt = 0;
        while(p<n)
        {   
            p = p * (p+1);
            cnt++;
        }
        if (cnt % 2 == 0)
            cout << copy << " John wins" << endl;
        else
            cout << copy << " Michael wins" << endl;
        return 0;
    }
};
int main()
{
    multiplicationGame obj;
    obj.get();
    obj.game();
    return 0;
}