#include<iostream>
#include<queue>
using namespace std;

int main() {
    //------Max Heap------
    // priority_queue<int> p;

    // p.push(213);
    // p.push(23);
    // p.push(532);
    // p.push(880);

    // cout << "First priority queue: " << p.top() << endl;

    //  ------Max Heap------
    priority_queue<int> maxi;
    maxi.push(213);
    maxi.push(23);
    maxi.push(532);
    maxi.push(880);
    cout <<"size: " <<maxi.size() << endl;

    int n = maxi.size();
    for(int i = 0; i<n; i++) {
        cout << maxi.top() << " ";
        maxi.pop();
    }cout << endl;

    cout << "empty or not: " <<maxi.empty() << endl;

    //------Min Heap------
    // priority_queue<int, vector<int>, greater<int> mini;
    // mini.push(213);
    // mini.push(23);
    // mini.push(532);
    // mini.push(880);
    // cout <<"size: " <<mini.size() << endl;

    // int m = mini.size();
    // for(int i = 0; i<m; i++) {
    //     cout << mini.top() << " ";
    //     mini.pop();
    // }

  
    



/*


    queue<string> q;

    q.push("Chinmay");
    q.push("Bhatt");
    q.push("Thunder");

    cout << "First queue: " << q.front() << endl;
     
    q.pop();
    cout << "First queue: " << q.front() << endl;

    cout << "queue size: " << q.size() << endl;

*/


//------------------------------ Priority Queue ------------------------------




}

 int arr[10] = {1}; // arr[0] = 1, baki default 0 hoga

    // ✅ Correct Loop (Only runs from 0 to 9)
    for (int i = 0; i < 10; i++) { 
        arr[i] = 1; // Sabhi elements ko 1 se initialize kar raha hai
    }

    // ✅ Correct Loop for Printing (Only runs from 0 to 9)
    for (int i = 0; i < 10; i++) { 
        cout << arr[i] << endl;
    }