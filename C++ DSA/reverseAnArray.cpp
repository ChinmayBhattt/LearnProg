#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while( start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main () {

    int arr[6] = {2,-5,34,52,-1,8};
    int arr1[5] = {12,6,-3,5,1};
    
    reverse(arr, 6);
    reverse(arr1, 5);

    printArray(arr, 6);
    cout << endl;
    printArray(arr1, 5);



}