#include <iostream>
using namespace std;
void show(int x, int y)
{
    cout << "x:" << x << "y:" << y << endl;
}
void swapping(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void swapbyref(int &x, int &y)
{
    int z = x;
    x = y;
    x = z;
}
void swapbyaddresss(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before swapByVal: ";
    show(x, y);

    swapbyref(x, y);

    cout << "After swapByVal: ";
    show(x, y);

    cout << endl;

    cout << "Before swapByRef: ";
    show(x, y);

    swapbyref(x, y);

    cout << "After swapByRef: ";
    show(x, y);

    cout << endl;

    cout << "Before swapByAddress: ";
    show(x, y);

    swapbyaddresss(&x, &y);

    cout << "After swapByAddress: ";
    show(x, y);

    return 0;
}
