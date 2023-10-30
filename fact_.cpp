// find the factorial of a number
// 1. using loop statement
// 2. using function - argument and return type
// 3. using recursion
// 4. using class - Factorial, DM- int n, int fact, get() , display() constructor also bnana hai
// 5. with the help of friend function approach

// #include <iostream>
// using namespace std;
// int main()
// {
//     int fact = 1;
//     int n;
//     cin >> n;
//     if (n == 0)
//     {
//         fact = 1
//     }
//     else
//     {
//         for (int i = n; i >= 1; i--)
//             fact = fact * i;
//     }
//     cout << fact;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int fun1(int n)
// {
//     int fact = 1;
//     if (n == 0)
//     {
//         fact = 1;
//     }
//     else
//     {
//         for (int i = n; i >= 1; i--)
//             fact = fact * i;
//     }
//     return fact;
    
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int r = fun1(n);
//     cout << r;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int fact(int n)
// {
//     if(n == 1|| n == 0)
//         return 1;
//     else
//         return n*fact(n-1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fact(n);

//     return 0;
// }


// 4. using class - Factorial, DM- int n, int fact, get() , display() constructor also bnana hai
// #include <iostream>
// using namespace std;
// class Factorial
// {
//     int n;
//     int fact;
//     public:
//     Factorial()
//     {
//         fact = 1;
//     }
//     void get()
//     {
//         cin >> n;
//     }
//     void display()
//     {
//         if(n == 0)
//             fact = 1;
//         else
//         {
//             for(int i = n; i >=1; i--)
//             {
//                 fact = fact * i;
//             }
//         }
//         cout << fact;
//     }
// };
// int main()
// {
//     Factorial obj;
//     obj.get();
//     obj.display();
//     return 0;
// }


// 5. Using the friend function approach 
// #include <iostream>
// using namespace std;
// class Factorial
// {
//     int fact;
//     public:
//     Factorial()
//     {
//         fact = 1;
//     }

//     void display(int n)
//     {
//         if(n == 0)
//             fact = 1;
//         else
//         {
//             for(int i = n; i >=1; i--)
//             {
//                 fact = fact * i;
//             }
//         }
//         cout << fact;
//     }
//     friend void fun();
// };
// void fun(int x)
// {
//     Factorial obj;
//     obj.display(x);
// }
// int main()
// {
//     int c;
//     cin >>c;
//     fun(c);
//     return 0;
// }
