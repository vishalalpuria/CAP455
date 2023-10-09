#include <iostream>
using namespace std;

//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

// int main()
// {
//     int sp = 4;
//     for(int i = 1;i <=5;i++)
//     {
//         for(int j = 1;j<=sp;j++)
//         {
//             cout << " ";
//         }
//         for(int k = 1;k<=5-sp;k++)
//         {
//             cout << k;
//         }
//         cout << endl;
//         sp--;
//     }
// }



// 12345
// 1234
// 123
// 12
// 1
// int main()
// {
//     for(int i = 0; i <= 4;i++)
//     {
//         for(int j = 1; j<=5-i; j++)
//         {
//             cout << j;
//         }
//         cout << "\n";
//     }
//     return 0;
// }



//      1
//     21
//    321
//   4321
//  54321 
int main()
{
    int sp = 4;
    for(int i = 1; i<=5;i++)
    {
        for(int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        sp--;
        for (int k = i;k >0;k--)
        {
            cout << k;
        }
        cout << "\n";
    }
    return 0;
}
