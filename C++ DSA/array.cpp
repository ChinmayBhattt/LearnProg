#include<iostream>
using namespace std;


void printArray(int arr[], int size){
     for(int i=0; i<=size; i++){
        cout<<arr[i]<<" ";

     }
}

void printArrayChar(char arr[], int size){
     for(int i=0; i<=size; i++){
        cout<<arr[i]<<" ";

     }
}


int main(){

    int number[5] = {12,43,234,23,234}; 
    // printArray(number, 4);

    // cout<<number[0]<<endl;
    // cout<<number[1]<<endl;
    // cout<<number[2]<<endl;

    int second[3] = {12,4,34};

    // cout << "Value at 2 index: "<< second[2]<<endl ;

    // int n=5;
    cout << endl;

    int third[15] = {2,5};

    int thirdSize = sizeof(third)/sizeof(int);
    // cout<<"Size of third is " << thirdSize << endl;


    // for(int i=0; i<=n; i++){
    //     // cout<<third[i]<<endl;

    // }

    int forth[10] = {0};
    // n = 9;

    cout<<endl;
     int fifth[10] = {1};
    //  printArray(fifth, 9);
    // n = 9;
    cout << endl;

    int fifthSize = sizeof(fifth)/sizeof(int);
    // cout<<"Size of Fifth is " << fifthSize << endl;
   

    char ch[5] = {'a','b','c','d','e'};
    printArrayChar(ch, 4);

    cout << endl;
    cout << endl;

    double d[3] = {1.32,12.32,31.13};

    for(int i=0; i<=2; i++){
            cout<<d[i]<<endl;

        }

        cout << endl;
    
    float f[3] = {1.3,2.3,3.1};

    for(int i=0; i<=2; i++){
            cout<<f[i]<<endl;

        }
    
    

    

    return 0;
}