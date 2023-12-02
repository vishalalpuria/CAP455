#include <iostream>

using namespace std;
int main()
{
    int *n = new int;    
    int *it = new int;    
    int *cd = new int; 
    int *lastTerm = new int; 
    int *sum = new int; 

    cin >> *n >> *it >> * cd;
    *lastTerm = *it + (*n-1)*(*cd);
    *sum = (*n) *(((*it)+(*lastTerm))/2);
    cout << *sum;
    delete sum;
    return 0;
}