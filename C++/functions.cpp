#include<iostream>
using namespace std;

//Function Prototype
// int sum(int a, int b); ->> Acceptable
// int sum(int a, b); ->> Not Acceptable
// int sum(int,int); ->> Acceptable

int sum(int a, int b);
// void g(void);
void g();

int main(){
    int num1,num2;
    
    cout<<"Enter The First Number: "; 
    cin>>num1;
    cout<<"Enter The Second Number: ";
    cin>>num2;

    cout<<"The Value of Num1 and Num2 is "<<sum(num1,num2)<<endl;
    g();


    return 0;
}
int sum(int a, int b){
    int c = a+b;
    return c;
}

void g(){
    cout<<"Hello";
}