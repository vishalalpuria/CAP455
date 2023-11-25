#include <iostream>
using namespace std;

class MyNumber {
private:
    float floatValue;

public:
    // Constructor
    // MyNumber(float value) : floatValue(value) {}
    MyNumber(float v)
    {
        floatValue = v;
    }
    // Overload the '+' operator to add a float and an int
    MyNumber operator+(MyNumber M) 
    {
        // MyNumber result(floatValue + static_cast<float>(intValue));
        MyNumber T;
        T.floatValue = floatValue + M.floatValue;
        return (T);
    }

    // Display the value
    void display()
    {
        cout << "Value: " << floatValue << endl;
    }
};

int main() {
    // Create an object with a float value
    MyNumber myFloat(3.5f);
    myFloat.display();

    // Overload the '+' operator to add an int to a float
    // MyNumber result = myFloat + 2;
    MyNumber obj2(5.5);
    obj2.display();
    int r = myFloat + obj2;
    cout <<"value of r = " << r;
    return 0;
}
