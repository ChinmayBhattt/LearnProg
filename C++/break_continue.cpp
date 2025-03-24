#include<iostream>
using namespace std;

int main(){

//********** Break ************
/*
    for (int i = 0; i < 50; i++)
    {
        cout<<i<<endl;
        if(i==30){
            break;
        }
    }
*/
//********** Continue ************

for (int i = 0; i <= 10; i++)
    {
        if(i==5){
            continue;;
        }
        cout<<i<<endl; 
    }



    return 0;
}