#include<iostream>
using namespace std;

void update(int **p){
    p = p + 1;

    // *p = *p + 1;

    // **p = **p + 1;

}

int main () {

    int i = 5;
    int *p = &i;
    int **p2 = &p;


    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;

    // cout << endl;

    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;

    // cout << &p << endl;
    // cout << p2 << endl;
    

    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;
    update(p2);
    cout << "After: " << i << endl;
    cout << "After: " << p << endl;
    cout << "After: " << p2 << endl;

}