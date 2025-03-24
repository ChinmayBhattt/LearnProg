#include <iostream>
using namespace std;

int main(){

    int arr[10] = {12, 2, 32, 3};

    cout << "Addresed of first Memory is " << arr << endl;
    cout << "Addresed of first Memory is " << &arr << endl;
    cout << "Addresed of first Memory is " << &arr[0] << endl;
    // cout << "Addresed of first Memory is " << &arr[1] << endl;

    cout <<"4th: " << *arr << endl;
    cout <<"5th: " << *arr+1 << endl;   // same
    cout <<"6th: " << (*arr)+1 << endl; // same
    cout << endl;
    cout <<"7th: " << *(arr+1) << endl;
    cout <<"7th: " << *(arr+2) << endl;
    cout <<"7th: " << *(arr+3) << endl;

    int i = 3;

    cout <<"arr[i]: " << arr[i] << endl;
    cout <<"i[arr]: " << i[arr] << endl;

    int temp[10] = {1,2};
    cout << sizeof(temp) << endl;
    cout << "1st: "<<sizeof(*temp) << endl;
    cout << "2nd: "<<sizeof(&temp) << endl;
    // cout << "3ed: "<<(*temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
    
    int a[20] = {1,2,3,4};
    cout <<"-> " << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;
    
    cout << endl;
    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << "-> " << &p << endl;

    int arr[10];
// ERROR
    // arr = arr + 1;
    int *ptr = &arr[0];
    cout <<ptr<< endl;
    ptr = ptr + 1;
    cout <<ptr<< endl;


   

    return 0;
}