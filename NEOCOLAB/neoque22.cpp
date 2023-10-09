// You are using GCC
#include <iostream>
#include <cmath>
using namespace std;
int getAllWays(int remainingSum, int power, int base);
int getAllWays(int remainingSum, int power, int base) 
{
   if(remainingSum == 0){
       return 1;
   }
   if(remainingSum < 0 || base <= 0){
       return 0;
   }
   int includeCurrentNum = getAllWays(remainingSum - pow(base ,power),power,base -1);
   int excludeCurrentNum = getAllWays(remainingSum,power,base -1);
   return includeCurrentNum + excludeCurrentNum;
   
}
int main(){
    int remainingSum,power;
    cin>>remainingSum>>power;
    int base = int(sqrt(remainingSum))+1;
    int result = getAllWays(remainingSum,power,base);
    cout<<result;
    return 0;
}