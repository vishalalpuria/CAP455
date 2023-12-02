#include <iostream>
using namespace std;

int main(){
    double *er = new double;
    double *amnt = new double;
    cin>>*er>>*amnt;
    printf("%0.2f",(*er)*(*amnt));
    delete er;
    delete amnt;
}