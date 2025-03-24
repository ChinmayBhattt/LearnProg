#include<iostream>
#include<list>
using namespace std;

int main () {

    list<int> l;
    // list<int> n(l);
    list<int> n(5, 10);
    cout << "print 'n' a copy of 'l': ";
    for(int i:n) {
        cout << i << " ";
    }cout << endl;


    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    for(int i:l) {
        cout << i << " ";
    }

l.push_front(2);

    for(int i:l) {
        cout << i << " ";
    }

    cout << endl;

    cout <<"Before erase" << endl;
    l.erase(l.begin());
    for(int i:l) {
        cout << i << " ";
    }
    cout <<endl<<"After erase" << endl;

    cout << "Size: " << l.size() << endl;
    cout << "Size: " << sizeof(l) << endl;

}