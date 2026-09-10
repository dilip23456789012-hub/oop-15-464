#include <iostream>
using namespace std;
class point
{
private:
   int x, y;

public:
   point(int x = 0, int y = 0) : x{x}, y{y} {}
   void show()
   {
      cout << x << "," << y << endl;
   }
   void operator+(point p)
   {
      int a = x + p.x;
      int b = y + p.y;
      cout << a << "," << b << endl;
   }
};
int main()
{
   point p1(10, 20), p2(30, 40);
   p1.show();
   p2.show();
   p1 + p2;
   return 0;
}
