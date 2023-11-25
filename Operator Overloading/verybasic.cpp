#include <iostream>

struct MyNumber {
    int value;
};

// Overloading the '+' operator as a global function
MyNumber operator+(const MyNumber& a, const MyNumber& b) {
    MyNumber result;
    result.value = a.value + b.value;
    return result;
}

int main() {
    MyNumber a = {5};
    MyNumber b = {10};

    // Using the overloaded '+' operator
    MyNumber result = a + b;

    std::cout << "Result: " << result.value << std::endl;

    return 0;
}
