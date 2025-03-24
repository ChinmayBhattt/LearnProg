#include<iostream>
using namespace std;

int main(){

    // int num = 5;
    
    // cout << num <<endl;
    
    // // Address of Operator - &

    // cout << "Address of num is " <<  &num << endl;

    int num = 5;
    int *ptr = &num;
     
    cout<<"Value is "<<*ptr<<endl;
    cout<<"Addresed is "<<ptr<<endl;
    cout<<"Addresed is "<<&num<<endl;

    cout << endl;

    double d = 4.2;
    double *p2 = &d;

    cout<<"Value is "<<*p2<<endl;
    cout<<"Addresed is "<<p2<<endl;
    cout<<"Addresed is "<<&d<<endl;
   
   cout << "Size of integer is "<<sizeof(num) << endl;
   cout << "Size of Pointer is "<<sizeof(ptr) << endl;

   cout << "Size of double is "<<sizeof(d) << endl;
   cout << "Size of Pointer2 is "<<sizeof(p2) << endl;

    return 0;
}