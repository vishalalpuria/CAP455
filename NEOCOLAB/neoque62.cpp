#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int arr[10], n, i, max, min;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    fstream file;
    file.open("sample.dat", ofstream::out);
    file << max << " " << min;
    file.close();
    cout << max << " " << min;
    return 0;
}