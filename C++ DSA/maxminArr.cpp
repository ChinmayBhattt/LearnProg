#include<iostream>
using namespace std;

int getMin(int num[], int size){

    int min = INT_MIN;
    
    for(int i =0; i<size; i++){
       if(num[i] > min){
        min = num[i];
       }
    }
    return min;
}

int getMax(int num[], int size){

    int max = INT_MAX;

    for(int i =0; i<size; i++){
       if(num[i] < max){
        max = num[i];
       }
    }
    return max;
}
int main() {

    int size;
    cin >> size;
    int num[100];

    for(int i =0; i<size; i++){
        cin>>num[i];
    }

    cout <<"Maximum Value is "<<getMax(num, size) << endl;
    cout <<"Minimum Value is "<<getMin(num, size) << endl;


    return 0;
}