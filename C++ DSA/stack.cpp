#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<string> s;

    s.push("Chinmay");
    s.push("Bhatt");
    s.push("Thunder");

    cout <<"First take: " << s.top() << endl;

    s.pop();
    cout <<"First take: " << s.top() << endl;

    // s.pop();
    // cout <<"First take: " << s.top() << endl;

    cout << "Stack Size: " <<s.size() << endl;
    cout << "empty or not: " <<s.empty() << endl;




}