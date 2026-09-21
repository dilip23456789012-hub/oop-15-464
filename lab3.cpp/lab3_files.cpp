#include <iostream>
using namespace std;

// 1. Inline function
inline int add(int a, int b) {
    return a + b;
}

// 2. Function with default argument
int multiply(int a, int b = 2) {
    return a * b;
}

// 3. Function overloading
int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

int main() {
    // Inline function
    cout << "Addition: " << add(10, 20) << endl;

    // Default argument
    cout << "Multiplication with two arguments: "
         << multiply(10, 5) << endl;

    cout << "Multiplication with default argument: "
         << multiply(10) << endl;

    // Function overloading
    cout << "Integer subtraction: "
         << subtract(20, 8) << endl;

    cout << "Decimal subtraction: "
         << subtract(20.5, 8.5) << endl;

    return 0;
}