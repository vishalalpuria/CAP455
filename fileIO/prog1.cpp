#include <iostream>

#include <fstream> // to access the classes that deals with files

/*
Some useful classes for working with files 
1. fstreambase 
2. ifstream - input file stream (derived from fstreambase)
3. ofstream - output file stream (derived from fstreambase)
*/


/*               
There primarily are two ways to open a file in c++
1. Using the constructor 
2. Using the member function "open()"  
*/
using namespace std;
int main()
{   
    string s = "hello";
    string s2;
    //Opening file using constructor and writing in it

    // ofstream myobject("sample.txt"); // write operation 
    // myobject << s;


    //Opening file using constructor and reading from it

    ifstream myobject("sample.txt"); // read operation 
    // myobject >> s2; // it will read only one word
    getline(myobject,s2); // it will read one line at once
    cout << s2;



    return 0;
}