#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int arr[30],n;
    cin >> n;
    for(int i = 0; i < n ; i++)
        cin >> arr[i];
    
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    ofstream file;
    file.open("sample.dat");
    for(int i = 0; i < n ; i++)
        file << arr[i] << " ";

    file.close();

    for(int i = 0; i < n ; i++)
        cout << arr[i] << " ";

    return 0;
}