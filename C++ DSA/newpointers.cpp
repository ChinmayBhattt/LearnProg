#include<iostream>
using namespace std;


int main() {

    // int arr[5];
    // cout << arr <<endl;
    // cout << *arr <<endl;
    // cout << &arr <<endl;
    // cout << &arr[0] <<endl;


    // int arr[8] = {12,21,13,63,23,73,82,23};
    // int arr[8] = {1,2,3,4,5,6,7,8};

    // for (int i = 0; i < 8; i++)
    // {
    //    cout << *(arr + i) << " ";
    // //    cout << i[arr] << " ";
    // }
    

    // cout << &arr << endl;
    // cout << (&arr + 1) << endl;
    // cout << (&arr + 2) << endl;
    // cout << (&arr + 3) << endl;

    // cout << (*arr + 1) << endl; // 13
    // cout << *(arr + 1) << endl; // 21
    // cout << *(arr) + 1 << endl; // 13
    // cout << (*arr) + 1 << endl; // 13

    // cout << (*arr+2) <<endl;
    // cout << (*arr*2) <<endl;
    // cout << *(arr + 0) <<endl;
    // cout << *(arr + 1) <<endl;
    // cout << *(arr + 2) <<endl;
    // cout << (*arr + 1) <<endl;
    // cout << (*arr) + 1 <<endl;

    int check[10]; // array size is 10 and int byte is 4 , 4 * 10 = 40
    cout << sizeof(check) << endl;

    int *p = &check[0];
    cout << sizeof(p) << endl; 
    // first posstion of array, arr[0] is 4 and data type int = 4, 4 * 4 = 8
    cout << sizeof(*p) << endl; 
    cout << sizeof(&p) << endl; 


}