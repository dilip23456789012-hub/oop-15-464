#include <iostream> 
using namespace std;
class point{
    private:
    int x,y;
    public:
    point() :x{0},y{0}{}

    point(int p,int q) :x{p},y{q}{ 
        cout<<"parametrized constructor called"<<endl;
    }
    void show(){
        cout<<"x="<<x<<" y="<<y<<endl;
    }
};
int main(){
    point p1;
    point p2(5,10);
    p1.show();
    p2.show();
    return 0;
}