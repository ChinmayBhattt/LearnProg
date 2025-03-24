#include<iostream>
#include<map>

using namespace std;

int main() {

    map<int, string> m;

    m[1] = "Chinmay";
    m[2] = "Bhatt";
    m[13] = "thunder";

    // m.insert( {5,"NewLength"} );

    cout <<"Before erase "<<endl;
    for(auto i:m) {
        cout << i.first << " - " << i.second << endl;
    }cout << endl;

    cout <<"finding 13 : " << m.count(13) << endl;
    cout <<"finding -13 : " << m.count(-13) << endl;
    cout << endl;
    m.erase(13);
    cout <<"After erase "<<endl;
    for(auto i:m) {
        cout << i.first << " - " << i.second << endl;
    }

    auto it = m.find(5);

    for(auto i=it; i!=m.end(); i++ ) {
        cout<< (*i).first << endl;
    }


}