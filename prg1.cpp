#include <iostream>
using namespace std;

// Call by Value
void value(int x) {
x = 20;
}

// Call by Reference
void reference(int &x) {
x = 20;
}

// Call by Address
void address(int *x) {
*x = 20;
}

int main() {
int a = 10;
int b = 10;
int c = 10;

cout << "Before Call by Value: " << a << endl;
value(a);
cout << "After Call by Value: " << a << endl << endl;

cout << "Before Call by Reference: " << b << endl;
reference(b);
cout << "After Call by Reference: " << b << endl << endl;

cout << "Before Call by Address: " << c << endl;
address(&c);
cout << "After Call by Address: " << c << endl;

return 0;

}