#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);

cout <<"element +nt,retrn true(1),false(0): " <<binary_search(v.begin(), v.end(), 5)<<endl;
cout <<"element +nt,retrn true(1),false(0): " <<binary_search(v.begin(), v.end(), 9)<<endl;
cout << endl;

cout <<"lower bound: " <<lower_bound(v.begin(), v.end(),7)-v.begin() <<endl;
cout <<"Upper bound: " <<upper_bound(v.begin(), v.end(),7)-v.begin() <<endl;

    int a = 5;
    int b = 9;

    cout << "Max: " << max(a,b) << endl;
    cout << "min: " << min(a,b) << endl;

    swap(a, b);
    cout <<"a: " << a << endl << "b: " << b << endl;

    string rev = "abcd";
    reverse(rev.begin(), rev.end());
    cout << "reverse: " << rev << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout <<"before rotating" << endl;

    for(int i:v) {
        cout << i << " ";

   } cout <<endl<< "After rotating" << endl;


}