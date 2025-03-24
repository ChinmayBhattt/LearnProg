#include<iostream>
#include<vector>
using namespace std;


int main() {

vector<int> b(5,1);
cout << "printing the a" <<endl;

for(int i:b) {
cout << i <<  " ";
}
cout << endl;

vector<int> var(b);

for(int i:var) {
cout << i <<  " ";
    
}


vector<int> a;

cout <<"size "<<sizeof(a) << endl;
cout <<"capacity of a is  "<<a.capacity() << endl;

a.push_back(1);
cout <<"capacity of a is  "<<a.capacity() << endl;

a.push_back(2);
cout <<"capacity of a is  "<<a.capacity() << endl;

a.push_back(3);
cout <<"capacity of a is  "<<a.capacity() << endl;
cout <<"size "<<a.size() << endl;

cout << "Return first element of array[0] " << a.front() << endl;
cout << "Return Last element of array[n-1] "<< a.back() << endl;
cout << endl;
cout << "remove last element of array ";
a.pop_back();
cout << "and Return Last element of array[n-1] "<< a.back() << endl;

//capacity - how many memery asign | how much element stored in array
cout <<"before clear: "<< a.size() << endl;
a.clear(); // clear all element but Not the "Capacity"
cout <<"After clear: " << a.size() << endl;

cout << endl;
cout << endl;
//starting 
a.begin();

}