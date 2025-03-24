#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int factorial(int n){
    if (n<=1){
    
    return 1;
    }
    return n * factorial(n-1);
}
int main(){
    int a;
    // cout<<"Enter The Value of a is ";
    // cin>>a;

    // cout <<"The Factoral "<<a<<" is "<<factorial(a);
    
    // int a;
    cout<<"Enter The Value of a is ";
    cin>>a;

    cout <<"The Fibonacci Seires "<<a<<" is "<<fib(a);

    


    return 0;
}