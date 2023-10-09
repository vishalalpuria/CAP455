#include <iostream>
using namespace std;
class Occurrence
{
    string str1;
    char ch1;

public:
    void input()
    {
        cin >> str1;
        cin >> ch1;
    }
    void countOccurrence()
    {
        int cnt = 0;
        for (int i = 0; i < str1.length(); i++)
        {
            if (str1[i] == ch1)
            {
                cnt++;
            }
        }
        cout<< cnt;
    }
};

int main()
{
    Occurrence obj;
    obj.input();
    obj.countOccurrence();
}