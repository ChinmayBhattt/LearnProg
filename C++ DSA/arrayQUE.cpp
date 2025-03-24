#include <iostream>
using namespace std;


int main() {

//Questions -----

// Q.1 print sum of all element in array
    int arr[5] = {2,4,6,2,8};

    int sum = 0;

    for(int i = 0; i<=5; i++){
        sum = sum + arr[i];
    }
    cout<<sum<<endl;

}