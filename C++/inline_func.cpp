#include<iostream>
using namespace std;

 int product(int a, int b){
    static int c=0; // this exucute only once
    c = c +1; // next time the value is same
    return a*b+c;
}

 int moneyRecieve(int currentmoney, float factor=1.04){
    return currentmoney * factor;
 }
int main(){
    int money =10000;
    // cout<<money<<" "<<moneyRecieve(money)<<endl;
    cout<<money<<" "<<moneyRecieve(money, 1.1)<<endl;


    // int a,b;
    // cout<<"Enter THe Value:";
    // cin>>a>>b;

    // cout<<product(a,b)<<endl;
    


    return 0;
}