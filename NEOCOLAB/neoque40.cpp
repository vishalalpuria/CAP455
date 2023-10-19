#include <iostream>
using namespace std;


int main()
{
    
    string s,s2;
    getline(cin,s);
    getline(cin,s2);

    cout <<"The first string before swapping is: " <<s;
    cout <<"\nThe second string before swapping is: " <<s2;
    s.swap(s2);
    cout <<"\nThe first string before swapping is: " <<s;
    cout <<"\nThe second string before swapping is: " <<s2;

    return 0;
}