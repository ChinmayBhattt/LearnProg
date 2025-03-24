// #include<iostream>
// using namespace std;

// int arthmaticProgression(int a1, int n, int d){

//     int ans = (a1 + (n - 1) * d);

//     cout <<"Answer is ";
//     return ans;

// }

// int main(){

//     int a1, n, d;
//     cout << "The First Term in the Sequence a1: ";
//     cin>>a1;
//     cout <<"The nth term of the AP: ";
//     cin >> n;
//     cout <<"d: is the common Difference of the AP: ";
//     cin >> d;

//     cout<<arthmaticProgression(a1,n,d);

//     return 0;
// }

#include <iostream>
using namespace std;

int fibbonacchi(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return fibbonacchi(n - 1) + fibbonacchi(n - 2);
}
int main()
{

    int a;
    cin >> a;

    cout << fibbonacchi(a);

    return 0;
}