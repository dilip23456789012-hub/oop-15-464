#include <iostream>
using namespace std;

inline int addition(int a,int b){
    return a+b;
}
int multiple(int a,int b=2){  //default argument 
    return a*b;
}
int subtraction(int a,int b){
    return a-b;
}
float subtract(int a,int b){
    return a-b;
}
int main(){
    int x=20,y=10;
    cout<<"addition"<<addition(x,y)<<endl;
    cout<<"multiple"<<multiple(x)<<endl;
    cout<<"subtraction"<<subtraction(x,y)<<endl;
    cout<<"floatsubtraction"<<subtract(20.5f,10.2f)<<endl;
    return 0;
}