#include <iostream>
#include <cmath>
using namespace std;
class QuadraticEquation{
    public:
void solveAndDisplayRoots(float a,float b,float c){
    float dis = (b*b) -(4*a*c);
    if(dis>0){
        float root1 = (-b+sqrt(dis))/(2*a);
        float root2 = (-b-sqrt(dis))/(2*a);
        cout<<"Root 1: "<<root1<<endl;
        cout<<"Root 2: "<<root2;
    }
    else if(dis==0){
        float root1 = -b/(2*a);
        cout<<"Root: "<<root1;
    }else{
        float real = -b/(2*a);
        float img = sqrt(-dis)/(2*a);
        cout<<"Root 1: "<<real<<"+"<<img<<"i"<<endl;
        cout<<"Root 2: "<<real<<"-"<<img<<"i"<<endl;
        
    }
}

};
int main(){
   int* k = new int();
   float a,b,c;
   cin>>a>>b>>c;
   QuadraticEquation q1;
   q1.solveAndDisplayRoots(a,b,c);
   delete k;
}