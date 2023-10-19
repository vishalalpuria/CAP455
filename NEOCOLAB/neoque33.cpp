#include <iostream>
using namespace std;
int findMaxElement(int *ptr, int m, int n)
{
    int max = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < *((ptr + i * n) + j))
                max = *((ptr + i * n) + j);
        }
    }
    return max;
}
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int r = findMaxElement((int *)arr, m, n);

    cout << r;

    return 0;
}