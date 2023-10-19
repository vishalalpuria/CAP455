#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, ele, flag = 0;
    cin >> n;

    int *ptr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        cin >> ptr[i];
    cin >> ele;
    for (int i = 0; i < n; i++)
        if (ele == ptr[i])
            flag = 1;

    if (flag == 0)
        cout << "Seat is not available.";
    else
        cout << "Seat is available.";
    return 0;
}