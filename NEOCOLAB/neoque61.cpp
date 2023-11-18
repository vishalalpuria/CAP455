#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int sum = 0;
    int tmp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
    }
    cout << sum;

    fstream file;
    file.open("sample.txt", ofstream::out);
    file << sum;
    file.close();
    return 0;
}