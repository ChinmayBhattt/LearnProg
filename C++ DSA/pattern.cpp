#include<iostream>
using namespace std;

int main(){

  int n=4;
  // int i =1;
  // cin>>n;
  // while(i<=n){ 
  //   int space=i-1;
  //   while (space){
  //     cout<<space;
  //     space=space-1;
  //   }
  //   int star=n-i+1;
  //   while (star){
  //     cout<<star;
  //     star-=1;
  //   }
  //   cout<<endl;
  //   i+=1;
  // }




//   int n;
//   cout << " n: ";
//   cin >> n;

//  int row = 1;

//  while (row<=n)
//  {
//   int space = row-1;
//   while (space)
//   {
//     cout <<space;
//     space = space -1;
    
//   }
//   int star = n-row+1;
//    while (star)
//    {
//     cout<<star;
//     star = star - 1;
//    }
   
//   cout <<endl;
//   row++;
  

//  }
 

//   return 0;
// }

  // int i = 1;

  // while(i<=n) {

  //   int j = 1;
  //   int c = n-i+1;
  //   while(j<=c){

  //     cout <<"*";
      
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }



  int i = 1;
  int count = 1;
  while(i<=n) {

    int space = n-i;

    while(space) {
      cout <<" ";
      space = space- 1;
    }

    int j = 1;
    int c = n-i+1;
    while(j<=i){

      cout <<count;
      count++;
      j++;
    }
   

    while(j<=c){

      cout <<i+j-1;
      
      j++;
    }
    cout << endl;
    i++;
  }

//------------


//   int n;
//   cout <<"Enter a Value of n: ";
//   cin >> n;

  // int i = 1;
  // int count = 1;
  // while(i<=n) {

  //   int space = n-i;

  //   while(space<=n) {
  //     cout <<" ";
  //     space = space + 1;
  //   }

  //   int j = 1;
  //   int c = n-i+1;
  //   while(j<=c){

  //     cout <<i+j-1;
      
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }



// int i = 1;
//   while(i<=n) {

//  int j = 1;
//  int c = n-i+1;

//     while(j<=c){
//         cout <<j;
//         j++;
//     }

//     while(j<=c){
//         cout <<j;
//         j++;
//     }

//  while (j <= n - i) {
//             cout << " ";
//             j++;
//         }

//         j = 1;
//         // Printing stars
//         while (j <= 2 * i) {
//             cout << "*";
//             j++;
//         }

//      j = 1;
//      c = n-i+1;

//     while(j<=c){
//         cout <<j;
//         j++;
//     }
    
//     cout << endl;
//     i++;

//   }