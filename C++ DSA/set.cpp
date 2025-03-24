#include<iostream>
#include<set>
using namespace std;

int main() {

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(0);
    s.insert(6);
    s.insert(8);
    s.insert(8);

    for(auto i:s){
        cout << i << " ";
    }
cout << endl;

set<int>::iterator it = s.begin();
it++;
    s.erase(it);

    for(auto i:s){
        cout << i << " ";
    }cout << endl;

    cout <<"Count is present(1) or absent(0): "<<s.count(5) << endl;
    cout <<"Count is present(1) or absent(0): "<<s.count(6) << endl;

    set<int>::iterator itr  = s.find(5);

    // cout << "Value at present in itFind: " << (*it) << endl;

    for(auto it=itr; it!=s.end(); it++) {
        cout << *it << " ";
    }cout << endl;

    

}