#include <iostream>
using namespace std;
bool isMagicSquare(int mat[3][3])
{
    int n = sizeof(mat[0])/sizeof(mat[0][0]);

    int i=0,j=0;
    int sumd1 = 0, sumd2=0;
    for (i = 0; i < n; i++)
    {
        sumd1 += mat[i][i];
        sumd2 += mat[i][n-1-i];
    }
    if(sumd1!=sumd2)
        return false;
 
    // For sums of Rows
    for (i = 0; i < n; i++) {
         
        int rowSum = 0, colSum = 0;   
        for (j = 0; j < n; j++)
        {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        if (rowSum != colSum || colSum != sumd1)
            return false;
    }
   return true;
}

int main()
{   
    int arr[3][3];
    for(int i= 0; i <3; i++)
    {
        for(int j = 0; j <3; j++)
        {
            cin >> arr[i][j];
        }
    }
    if(isMagicSquare(arr))
        cout << "Magic Matrix";
    else
        cout << "Not Magic Matrix";
    
}