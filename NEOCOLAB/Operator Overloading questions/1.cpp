#include <iostream>
using namespace std;
class test
{
    int m;
    int arr[20][20];
    public:
    void get()
    {
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
    void disp()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    void operator++(int)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j]++;
            }
        }
    }
    void operator--(int)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                arr[i][j]--;
            }
        }
    }
};

int main()
{
    test obj1;
    obj1.get();
    cout << "Matrix after incrementing each element by 1:\n";
    obj1++;
    obj1.disp();


    cout << "Matrix after decrementing each element by 1:\n";
    obj1--;
    obj1--;
    obj1.disp();



    return 0;
}