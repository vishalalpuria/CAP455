#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char* reverseString(const char* str){
    int n = strlen(str);
    int tmp = 0;
    char* revStr = new char[n+1];
    for(int i=n-1;i>=0;i--)
    {
        revStr[tmp]=str[i];
        tmp ++;
    }
    return revStr;
}
int main(){
   string input;
   getline(cin,input);
   
   char* revStr =  reverseString(input.c_str());

    cout<<"Reversed String: "<<revStr;
    delete []revStr;


}