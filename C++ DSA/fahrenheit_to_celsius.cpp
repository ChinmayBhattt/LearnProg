#include<iostream>
#include<iomanip>
using namespace std;

int main(){

  double celsius, fahrenheit;

  cout << " Enter Temperature (F): ";
  cin >> fahrenheit;

  celsius = (fahrenheit - 32) * (5.0/9.0); 

  cout << "Temparatue (C): ";
  cout<<fixed<<setprecision(2)<<celsius<<endl;
  


    return 0;
}