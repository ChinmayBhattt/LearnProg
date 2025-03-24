#include<iostream>
#include<array>
using namespace std;

int main () {
  int ar[3] = {1,2,3};

  array<int,4> a = {1,2,3,4};

  int size  = a.size();

  for(int i = 0; i<size; i++){
    cout << a[i] <<" ";
  } cout << endl;

  cout <<"Element at 2nd index is " << a.at(2) << endl;
  cout <<"Empty or not " << a.empty() << endl;
  cout << "Return first element of array[0] " << a.front() << endl;
  cout << "Return Last element of array[n-1] " << a.back() << endl;


  return 0;
}