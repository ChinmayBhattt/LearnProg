#include<iostream>
using namespace std;

int main(){

 // char ch;
// cout<<"Enter Ch: ";
// cin>>ch;

// if(ch >= 'a' && ch <= 'z'){
//   cout<<"This is Lower Case"<<endl;
// }
// else if(ch >= 'A' && ch <= 'Z'){
//   cout<<"This is Upper Case"<<endl;
// }
// else if(ch >= '0' && ch <= '9'){
//   cout<<"This is Numeric"<<endl;
// }

//-------------------------------------//-------------------------------------

//    int a;

//    a = cin.get();
//    cout<<a<<endl;

//-------------------------------------//-------------------------------------


  // int a= 1;
  // int b = 2;

  // if(a-- > 0 && ++b>2){
  //   cout<<"inside if"<<endl;
  // }else{
  //   cout<<"inside else";
  // }
  // cout <<a << " "<<b<<endl;

//-------------------------------------//-------------------------------------


//   int n = 3;

// cout <<(25 * (++n));

//-------------------------------------//-------------------------------------

// int a = 1;
// int b = a++;
// int c = ++a;

// cout <<b<<endl;
// cout << c<<endl;

//-------------------------------------//-------------------------------------

  // int n;
  // cout << "n: ";
  // cin >> n;

  // bool isPrime = 1;
  // for (int i = 2; i < n; i++)
  // {
  //   if (n % i == 0)
  //   {
  //     isPrime = 0;
  //     break;
  //   }
  // }

  // if (isPrime == 0)
  // {
  //   cout << "not prime";
  // }
  // else
  // {
  //   cout << "prime";
  // }


// int i = 0;
// int ans = 0;
// int c = (~n) + 1;
// while( c!= 0){
//     int bit = c&1;

//     ans = (bit * pow(10, i) + ans);
//     c = c>>1;
//     i++;
// }
// cout << ans;
    // return 0;
// }
// int i = 0;
// int ans = 0;
// int c = (~n) + 1;
// while( c!= 0){
//     int bit = c&1;

//     ans = (bit * pow(10, i) + ans);
//     c = c>>1;
//     i++;
// }
// cout << ans;

//-------------reverse palindrome----------


// int n=121, org, rev=0;
// org = n;

// while(n>0) {
//     rev = rev * 10 + n%10;
//     n = n/10;
// }
// cout <<rev;

// if(org==rev){
//     cout <<"palinrom";
// }else{
//     cout <<"not palinrom";

// }


//-------------reverse to reverse----------

// #include <iostream>
// #include <math.h>
// using namespace std;

// int isSameAfterReversals(int num){

//     int reverse = 0;
//     while (num != 0){

//         int digit = (num % 10);
//         reverse = ((reverse * 10) + digit);
//         num = num / 10;
//    }

//    cout << reverse << endl;
//    return reverse;
// }

// int main(){
// int num=526;

// int reverse1 = isSameAfterReversals(num);
// int reverse2 = isSameAfterReversals(reverse1);
// // cout << reverse2 << endl;

// if(reverse2 == num) {
//   cout <<"correct";
// }else{
//   cout <<" not correct";

// }

   
// }


//-------------print sum of all element in array----------

// #include <iostream>
// #include <math.h>
// using namespace std;

// // print sum of all element in array
// void sumOfArr(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum = sum + arr[i];
//     }
    
//     cout << sum;
// }
// int main () {

//     int arr[5] = {1,2,3,4,5};
    
//     cout << "The Sum of array is ";
//     sumOfArr(arr, 5);
   


}