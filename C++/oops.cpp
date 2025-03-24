#include<iostream>
using namespace std;

class Employee {
    private:
        int a,b,c;
    public:
         int d,e;
         void setdata(int a1, int b1, int c1){
             a = a1;
             b = b1;
             c = c1;
         }
         void getdata(){
            cout<<a<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
            cout<<d<<endl;
            cout<<e<<endl;
         }
};
// void Employee :: setdata(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }
int main(){
    Employee harry;

    harry.d = 2;
    harry.e = 5;
    harry.setdata(1,2,3);
    harry.getdata();

    


    return 0;
}