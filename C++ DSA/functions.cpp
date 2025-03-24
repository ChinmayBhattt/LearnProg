#include<iostream>
using namespace std;


int power(int a, int b){

    cout <<"Enter a Value of a: ";
    cin>>a;
    cout <<"Enter a Value of b: ";
    cin>>b;

    int ans = 1;

    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    cout <<"Power is ";
    return ans;

}

int main(){

    int a,b;
    int n;
    cout <<"Value of n: ";
    cin >>n;
    cout <<endl;

    for(int i=0; i<=n; i++){
            cout<<power(a,b)<<endl;;

    }

   


    return 0;
}