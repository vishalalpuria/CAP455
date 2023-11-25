#include <iostream>
using namespace std;
class Matrix
{
    int sum = 0;
    int arr[100][100];
    int m, n;
    public:
    void get()
    {
        cin >> m >> n;
        for (int i = 0; i < m; i++)

            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
    }
    void disp()
    {
       for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
        cout << sum; 
    }
};
int main()
{
    Matrix obj;
    obj.get();
    obj.disp();
    return 0;
}