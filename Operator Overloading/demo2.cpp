#include <iostream>
using namespace std;
class MyNumber {
private:
    int value;

public:
    MyNumber(int val) {
        value = val;
    }

    // Overloading unary + operator
    MyNumber operator+(){
        // Custom behavior: simply return the original value
        return MyNumber(value);
    }

    int getValue() const {
        return value;
    }
};

int main() {
    MyNumber num1(5);
    MyNumber num2 = +num1; // Applying unary + operator

    // Displaying the values
    cout << "Original value: " << num1.getValue() << endl;
    cout << "After unary + operator: " << num2.getValue() << endl;

    return 0;
}
