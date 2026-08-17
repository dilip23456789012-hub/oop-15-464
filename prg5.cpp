#include <iostream>
using namespace std;
class bankaccount{
    public:
    string name;
    int amount;
    bankaccount(string s,int a){
        name = s;
        amount =a;
    }
   
    void deposit(int x){
       amount=amount+x;
    }
     void withdraw(int x){
        amount=amount-x;
    }
    void showbalance( ){
        cout<<name<<endl;
        cout<<amount<<endl;
    }
};
int main(){
    bankaccount account("dilip",20000);
    cout<<"total amount after the deposit:"<<endl;
      account.deposit(20000);
      account.showbalance();
cout<<"totalamount after withdraw "<<endl;
account.withdraw(10000);
account.showbalance();
return 0;
}