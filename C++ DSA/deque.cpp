#include<iostream>
#include<deque>
using namespace std;


int main() {

    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    
    // for(int i:d) {
    //     cout << i << " ";
    // }cout << endl;

    // d.pop_back();

 
    for(int i:d) {
        cout << i << " ";
    }cout << endl;
    

    cout << "First Index: " << d.at(1) << endl;

    cout << "Front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;
cout << endl;
    cout << "Empty or not " << d.empty() << endl;
cout << endl;

cout << "Before Size " << d.size() << endl;
d.erase(d.begin(), d.begin()+1);
cout << "after Size " << d.size() << endl;
cout << endl;



}