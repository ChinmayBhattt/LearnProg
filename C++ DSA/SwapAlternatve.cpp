#include <iostream>
#include <math.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i< n; i++){
        cout <<arr[i]<< " ";
    }
}
void swapAlternatve(int arr[], int size){
    for(int i = 0; i<=size; i+=2){
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

int main () {
 
   int even[6] = {1,4,5,2,76,97};
   int odd[5] = {34,77,11,88,57};

    swapAlternatve( even,  6);
    printArray(even,  6);

    
    cout << endl;
    swapAlternatve( odd,  6);
    printArray(odd,  6);





}