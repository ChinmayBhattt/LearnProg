#include<iostream>
using namespace std;

int factoral(int n) {
    int fact  = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
    
}

int nCr(int n, int r){

    int num = factoral(n);

    int denom = factoral(r) * factoral(n-r);

   return num/denom;
    

}
int main(){

    int n,r;
    cin >> n >> r;

    cout <<"Answer is "<<nCr(n,r);


    


    return 0;
}