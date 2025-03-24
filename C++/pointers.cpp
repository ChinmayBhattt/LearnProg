#include<iostream>
using namespace std;

int main(){

// ********* Pointers *********
// Data Type:-

// & - Addresed Operators********
    int a=5;
    
    int* b = &a;
    cout<<"The addresed of a is "<<&a<<endl;
    cout<<"The addresed of a is "<<b<<endl;

    cout<<endl;
    
// * - Derefrence Operators********
    cout<<"The Value at addresed is b "<<*b<<endl;
    
cout<<endl;

// Pointers to Pointers*****
    int** c = &b;
    
    cout<<"The addresed of a is "<<&b<<endl;
    cout<<"The addresed of a is "<<c<<endl;
    cout<<"The Value at addresed is b "<<*c<<endl;
    cout<<"The Value at addresed is b "<<**c<<endl;




    return 0;
}