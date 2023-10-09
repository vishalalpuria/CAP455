#include <iostream>
using namespace std;

class Rectangle
{
private:
    static int count;
    int length, breadth;
public:
    int getCount()
    {
        return count;
    }
    void setDimensions()
    {
        cin >> length >> breadth;
        count++;
    }
    int getArea()
    {
        return length*breadth;
    }
};

int Rectangle :: count = 0;

int main()
{   
    int i;
    cin >> i;
    Rectangle ob[i];
    for (int k = 0; k < i; k++)
    {
        ob[k].setDimensions();
    }
    
    cout << "Total number of rectangles: " << i;

    for (int j = 0; j < i; j++)
    {
        cout << "\nArea of rectangle " << (j+1) <<": "<< ob[j].getArea();
    }

    return 0;
}