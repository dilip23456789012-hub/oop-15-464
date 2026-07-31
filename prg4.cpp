#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>numbers={10,20,30,40,50};
    cout<<"[";
    for(auto x:numbers){
        cout<<x<<" ";
    }
     cout<<"]";

}