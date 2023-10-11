#include <iostream>
#include <climits>
using namespace std;
int findSmallestDifference(int arr[], int n) {
   int mindiff = INT_MAX;
   for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
         if (abs(arr[i] - arr[j]) < mindiff) {
            mindiff = abs(arr[i] - arr[j]);
         }
      }
   }
   return mindiff;
}
int main()
{
    int x;
    cin >> x;
    int arr[x];
    int l = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < l; i++)
        cin >> arr[i];
    int r = findSmallestDifference(arr,l);
    cout << r;
    return 0;
}





