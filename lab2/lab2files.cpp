#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x) {
    x = 100;
    cout << "Inside callByValue: " << x << endl;
}

// Call by Reference
void callByReference(int &x) {
    x = 200;
    cout << "Inside callByReference: " << x << endl;
}

// Call by Address
void callByAddress(int *x) {
    *x = 300;
    cout << "Inside callByAddress: " << *x << endl;
}

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    cout << "Before Call by Value: " << a << endl;
    callByValue(a);
    cout << "After Call by Value: " << a << endl;

    cout << "\nBefore Call by Reference: " << b << endl;
    callByReference(b);
    cout << "After Call by Reference: " << b << endl;

    cout << "\nBefore Call by Address: " << c << endl;
    callByAddress(&c);
    cout << "After Call by Address: " << c << endl;

    return 0;
}