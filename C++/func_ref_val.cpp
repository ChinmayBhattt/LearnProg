#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a+b;
    return c;
}

int& swap(int a, int b){
    int temp = a;
    a=b;
    b = temp;
    return a;
}

// call by reference using Pointers
void swapPointers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b =  temp;
}
int main(){
    // int a=3,b=5;
    // cout<<sum(a,b);

    int x=4,y=6;

    cout<<"The Value of X is "<<x<<endl<<"The Value of Y is "<<y<<endl;
     cout << endl;
    swap(x,y);
    cout<<"The Value of X is "<<x<<endl<<"The Value of Y is "<<y<<endl;

    cout << endl;
    swapPointers(&x,&y);
    cout<<"The Value of X is "<<x<<endl<<"The Value of Y is "<<y<<endl;

     


    return 0;
}