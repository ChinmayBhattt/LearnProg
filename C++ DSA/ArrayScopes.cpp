#include <iostream>
using namespace std;

void update(int arr[], int n){
    
    cout<<"Inside the Functions" <<endl;

    arr[0] = 233;
    
      for(int i=0; i<3; i++){
        cout<<arr[i] <<" ";
     } cout<< endl;

    cout<<"Going Back to Main Fucntion"<<endl;


}
int main() {

    int arr[3] = {1,2,3};

    update(arr, 3);

    for(int i=0; i<3; i++){
        cout<<arr[i] <<" ";
    }cout<< endl;


   

}