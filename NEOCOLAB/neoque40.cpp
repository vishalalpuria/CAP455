#include <iostream>
using namespace std;

int main()
{

    string s, copy;
    getline(cin, s);
    getline(cin, copy);

    cout <<"The first string before swapping is: " <<s;
    cout <<"\nThe second string before swapping is: " <<copy;
    s.swap(copy);
    cout <<"\nThe first string after swapping is: " <<s;
    cout <<"\nThe second string after swapping is: " <<copy;

    return 0;
}